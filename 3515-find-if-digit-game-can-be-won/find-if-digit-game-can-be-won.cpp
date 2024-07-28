class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
       int sum1 = 0, sum2=0;
       for(auto val: nums)
       {
        if(val < 10){
            // alice 
            sum1+= val;
        }
        else{
            sum2+= val;
        }
       } 
       return sum1 != sum2;
    }
};