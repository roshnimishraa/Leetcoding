class Solution {
public:
static bool comparator(vector<int> &a, vector<int> &b)
{
    return a[1] < b[1]; //sort acc. to end time
}
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
    if(n == 0) return 0;
    sort(points.begin(), points.end(), comparator);
    int count = 1;
    int limit = points[0][1];
    for(int i=1;i<n;i++)
    {
      if(points[i][0] > limit){
        count++;
        limit = points[i][1];
      }
    }
    return count;
    }
};