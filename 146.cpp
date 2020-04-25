class LRUCache {
    private:
    int cap;
    list<pair<int, int>> dq;
    unordered_map<int, list<pair<int,int>>::iterator> m;
  
    public:
  LRUCache(int capacity) {
        cap = capacity;
    }
    int get(int key) {
        auto it = m.find(key);
        if (it == m.end()) return -1;
        dq.splice(dq.begin(), dq, it->second);
        return it->second->second;
    }

    void put(int key, int value) {
        auto it = m.find(key);
        if (it != m.end()) dq.erase(it->second);
        dq.push_front(make_pair(key, value));
        m[key] = dq.begin();
        if (m.size() > cap) {
            int tmp = dq.rbegin()->first;
            dq.pop_back();
            m.erase(tmp);
        }
    }

};
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
