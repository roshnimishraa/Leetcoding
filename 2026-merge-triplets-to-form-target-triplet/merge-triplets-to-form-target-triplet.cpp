class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
    int x = target[0];
    int y = target[1];
    int z = target[2];
    bool foundX = 0;
    bool foundY = 0;
    bool foundZ = 0;
    for(auto it:triplets)
    {
        int a = it[0];
        int b = it[1];
        int c = it[2];
    if(a <= x && b <= y && c<=z)
    {
        if(a == x) foundX = 1;
        if(b == y) foundY = 1;
        if(c == z) foundZ = 1;
    }
    }
    return foundX && foundY && foundZ;    
    }
};