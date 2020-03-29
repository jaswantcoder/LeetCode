class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& a) {
   int i=0,j=a.size()-1;
        while(1){
     while(j>=0)
     {
         if(j&1  && j>=0 && a[j]%2==0 )
             break;
         j--;
     }
      while(i<a.size())
      {
          if(i%2==0 && i<a.size() && a[i]&1)
              break;
          i++;
      }
        
            if(i<a.size())
           { swap(a[i],a[j]);
            i++;
            j--;}
            else 
             break;
        }
        return a;
    }
};
