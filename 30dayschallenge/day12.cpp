class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        set< int > s;
        map<int,int> m;
        int val;
    set<int> :: iterator it, it1, it2;
        for(auto itt:stones)
        {
            s.insert(itt);
            m[itt]++;
        }
        while(s.size()>1 )
        {
            val=*s.rbegin();
        if(m[val]>1)
        {
            m[val]-=2;
            if(m[val]==0)
            {
                it=s.end();
                it--;
                s.erase(it);
            }
        
        }
           else
           {
              it1=s.end();
               it1--;
               it2=s.end();
              
             advance(it2,-2);
               cout<<*it1<<" "<<*it2<<" ";
               m[*it1]--;
               m[*it2]--;
                m[*it1-*it2]++;
              s.insert(*it1-*it2); 
               if(m[*it2]==0)
               {
                   s.erase(it2);
               }
                  s.erase(it1);
           }
        }
       if( m[*s.begin()]&1)
        return *s.begin();
        return 0;
        
    }
};
