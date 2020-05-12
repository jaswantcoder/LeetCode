class Solution {
public:
    vector<vector<bool>> vis;
    bool f=true;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        cout<<"hi";
      
        if(f)
        {vis.resize(image.size(), vector<bool> (image[0].size(),false));
        f=false;
        }
          vis[sr][sc]=true;
        if(sr-1>=0 && !vis[sr-1][sc] && image[sr-1][sc]==image[sr][sc])
        {
            floodFill(image,sr-1,sc,newColor);
        }
        if(sr+1<image.size()   && !vis[sr+1][sc] && image[sr+1][sc]==image[sr][sc])
            floodFill(image,sr+1,sc,newColor);
          if(sc-1>=0  && !vis[sr][sc-1] && image[sr][sc-1]==image[sr][sc])
        {
            floodFill(image,sr,sc-1,newColor);
        }
        if(sc+1<image[0].size()   && !vis[sr][sc+1] && image[sr][sc+1]==image[sr][sc])
            floodFill(image,sr,sc+1,newColor);
        
        image[sr][sc]=newColor;
        
        return image;
        
        
            
        
    }
};
