class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int fuel =0;
       int ans=0;
    int gasSum =0;   
for(int i=0;i<gas.size();i++)
{
 gasSum += gas[i];
}
int costSum =0;
for(int i=0;i<cost.size();i++)
{
    costSum += cost[i];
}
// base case 
if(gasSum < costSum) return -1;
for(int i=0;i<gas.size();i++)
{
    fuel += gas[i]-cost[i];
 if(fuel<0)
 {
     ans = i+1;
 fuel = 0;
 }
}
return ans;
    }
};