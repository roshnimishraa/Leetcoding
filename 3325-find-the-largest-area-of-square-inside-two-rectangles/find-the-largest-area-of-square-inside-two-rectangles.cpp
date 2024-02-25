class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& nums1, vector<vector<int>>& nums2) 
    {
   long long area=0;
for(int i=0;i<nums1.size();i++)
{
    for(int j=i+1;j<nums1.size();j++)
    {
long long x1=max(nums1[i][0],nums1[j][0]);
long long x2 = min(nums2[i][0],nums2[j][0]);
long long y1=max(nums1[i][1],nums1[j][1]);
long long y2=min(nums2[i][1],nums2[j][1]);

if(x1 < x2 && y1<y2)
{
long long s=min(x2-x1,y2-y1);
area = max(area,s*s);

}
 }
}     
return area;
    }
};