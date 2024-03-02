class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int dis[n];
    for(int i=0;i<n;i++)
    {
        dis[i]=1;
    }
// scan from L to R
for(int i=0;i<n-1;i++)
{
if(ratings[i+1]>ratings[i])
{
    dis[i+1]=dis[i]+1;
}
}
// scan from R to L 
for(int i=n-1;i>0;i--)
{
    if(ratings[i]<ratings[i-1])
    {
if(dis[i] >= dis[i-1]){
        dis[i-1] = dis[i]+1;
    }
   }
}
int total=0;
for(int i=0;i<n;i++)
{
    total+=dis[i];
}
return total;
    }
};