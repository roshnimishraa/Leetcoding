class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        sort(points.begin(),points.end());
    int rect = 1;
    int nextX = w+points[0][0];
    for(int i=0;i<points.size();i++)
    {
        if(points[i][0] > nextX)
        {
            rect++;
            nextX = points[i][0] + w;
        }
    }
    return rect;
    }
};