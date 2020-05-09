class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& p) {
        if(p.size()==2)
            return true;
        int i;
        int x1,x2,x3,y1,y2,y3;
        for(i=2;i<p.size();i++)
        {
                  x1=p[i][0];y1=p[i][1];
            x2=p[i-1][0];y2=p[i-1][1];
            x3=p[i-2][0];y3=p[i-2][1];
            if(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))
                return false;
        }
        return true;
             
    }
};
