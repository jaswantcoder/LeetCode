#define pb push_back
#define mp make_pair
#define fi first
#define se second
class FirstUnique {
    
    private: 
    list <int> l;
    map<int,pair<bool,list<int>:: iterator>>  m;
public:
    FirstUnique(vector<int>& nums) {
        for(auto it:nums)
        {
        add(it);
    }
    
    }
    
    int showFirstUnique() {
        if(l.begin()==l.end())
            return -1;
      return l.front();
        
    }
    
    void add(int val) {
        
        if(m.find(val)==m.end())
        {
            l.pb(val);
            m.insert(mp(val,mp(true,--l.end())));
               
       
        }
        else
        {
        list<int> :: iterator it;
           
           if( m[val].fi)
           { 
               m[val].fi =false;
               it=m[val].se;
               l.erase(it);}
        }
        return ;
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */
