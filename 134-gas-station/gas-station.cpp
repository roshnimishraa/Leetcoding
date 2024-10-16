class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int fuel=0, total=0;
        int ans=0;
    for(int i=0;i<gas.size();i++){
         fuel += gas[i] - cost[i];
        total += gas[i] - cost[i];
        if(fuel < 0){
            ans = i+1;
            fuel=0;
        }
    }
    return (total >= 0) ? ans : -1;
    }
};