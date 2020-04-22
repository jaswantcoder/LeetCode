/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int> size= binaryMatrix.dimensions();
        int m=size[0];
        int n=size[1];
    int i=0,j=n-1,num,ans=-1;
       while(1)
       {
           
           if(i>=0 && i<m && j>=0 && j<n)
               num=binaryMatrix.get(i,j);
           else break;
           if(num)
           {
               ans=j;
            j--;
           }
           else i++;
       }
        
        return ans;
        
    }
};
