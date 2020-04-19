
class Solution {
public:
    
    vector<vector<int>> g;
    vector< vector<int>> v;
    vector<vector<bool>> vis;

    
    int minPathSum(vector<vector<int>>& grid) {
     
                    if( grid.size() == 0) return 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(i == 0 && j == 0) continue;
                if(i == 0){
                    grid[0][j] += grid[0][j-1];
                }else if(j == 0){
                    grid[i][0] += grid[i-1][0];
                }else{
                    grid[i][j] = min(grid[i-1][j], grid[i][j-1]) + grid[i][j];
                }
            }
        }
        
        return grid[grid.size()-1][grid[0].size()-1];
      
      

        
    }
};
