class Solution {
public:
    int minNumberOfFrogs(string frogs) {
        
        vector<int > v(5);
            for(char c: frogs)
            {
                
                if(c=='c')
                    v[0]++, v[4]= max(0, v[4]-1);                
        else if(c=='r')
        {
            if(v[0])
            {
                v[0]--; v[1]++;
            } else return -1;
        }
        else if(c=='o')
        {
            if(v[1])
            {
                v[1]--; v[2]++;
            } else return -1;
        }
        else if(c=='a')
        {
            if(v[2])
            {
                v[2]--;
                v[3]++;
            } else return -1;
        }
        else if(c=='k')
        {
            if(v[3])
            {
                v[3]--;
                v[4]++;
            }
            else return -1;
            
            
        }
            }
        bool ans=false;
        for(int i=0;i<4;i++)
        {
            ans=ans| v[i];
        }
    if(ans)
        return -1;
    return v[4];
    }
    
};
/*
  vector<int> v(5);
        for (char i : croakOfFrogs)
            if (i == 'c')
                v[0]++, v[4] = max(0, v[4] - 1);
            else if (i == 'r')
                if (v[0])
                    v[0]--, v[1]++;
                else
                    return -1;
            else if (i == 'o')
                if (v[1])
                    v[1]--, v[2]++;
                else
                    return -1;
            else if (i == 'a')
                if (v[2])
                    v[2]--, v[3]++;
                else
                    return -1;
            else if (i == 'k')
                if (v[3])
                    v[3]--, v[4]++;
                else
                    return -1;
        if (v[0] || v[1] || v[2] || v[3])
            return -1;
        return v[4];
    }
    */
