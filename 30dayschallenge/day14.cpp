
class Solution {
public:
    int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
  
    else
        return gcd(b, a % b); 
} 
    string stringShift(string s, vector<vector<int>>& shift) {
        int i,j,k,rot=0,l;
        char temp;
    for(auto &it:shift)
    {
        cout<<it[1]<<" ";
        if(it[0])
        {
            rot+=it[1];
        }
        else
            rot-=it[1];
        
    }
      int n=s.size();
        rot=rot%n;
  l=gcd(abs(rot),n);
        cout<<"rot="<<rot<<endl;
        rot*=-1;
     for(i=0;i<l;i++)
     {
         cout<<"i="<<i<<endl;
         temp=s[i];
         j=i;
         while(1)
         {
             cout<<"k="<<k<<"j="<<j<<endl;
             k=j+rot;
             if(k>=n)
                 k-=n;
             else if(k<0)
                 k+=n;
            if(k==i)
            break;
             s[j]=s[k];
             j=k; 
         }
         s[j]=temp;
     }
        return s;
        
    }
};
