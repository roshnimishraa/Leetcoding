class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) 
{
    map<int,int> mp;
    for(auto it:hand)
    {
        mp[it]++;
    }
    for(auto it:mp)
    {
        int x = it.first; //val
        int y = it.second; //freq
    if(y>0)
    {
// group [x,x+1,x+2,....+(x+k-1)]
for(int i=0;i<groupSize;i++)
{
    if(mp[x+i] >= y)
    {
        mp[x+i]-=y;
    }
    else{
        return false;
    }
}
    }
    }
    return true;
}
};