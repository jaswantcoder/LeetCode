
#define vb vector<bool>
class Solution {
public:
    
   
    
    bool isValidSudoku(vector<vector<char>>& board) {
      
        int i,j, n=9;
       for(auto it:board)
       {
           set<char> s;
           for(auto itt:it)
           {
               if(itt!='.')
               {   if(s.find(itt)!=s.end())
              {
                  return false;
              }
               s.insert(itt);
               }
             
       }
             s.clear(); 
        
    }
    for(j=0;j<9;j++)
    {
        set<char> s;
        for(i=0;i<9;i++)
            
        {
            if(board[i][j]!='.')
            { if(s.find(board[i][j])!=s.end())
            return false;
            s.insert(board[i][j]);
            }
        }
        s.clear();
    }
    vector<vector<int>> row(10,vector<int>(10,0) ), col(10,vector<int>(10,0));
        vector<vector<vector<int>>> box(10, vector<vector<int>> (10, vector<int>(10,0)));
        for(i=0;i<n;i++)
        {
          // cout<<i<<" ";
            for(j=0;j<n;j++)
            {
          //  cout<<j<<" ";
                if(board[i][j]!='.')
                {    
                    if(row[i][board[i][j]-'1'] || col[j][board[i][j]-'1'] || box[i/3][j/3][board[i][j]-'1'])
                       return false;
                row[i][board[i][j]-'1']=1;
                col[j][board[i][j]-'1']=1;
                box[i/3][j/3][board[i][j]-'1']=1;
                 
                }
            }
        }
        
        return true;
    }       
        
        
        
        
        
};
