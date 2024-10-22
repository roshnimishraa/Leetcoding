class Solution {
    int solve(vector<int> &weights, int cap)
    {
        int days = 1;
        int loads = 0;
        for(int i=0;i<weights.size();i++)
        {
            if(weights[i] + loads > cap)
            {
                days++;
                loads = weights[i]; //move to next
            }
            else{
                loads += weights[i];
            }
        }
        return days;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
    int n = weights.size();
    int low = *max_element(weights.begin(),weights.end());
    int high = accumulate(weights.begin(), weights.end(),0);
while(low <= high)
{
    int mid = low + (high-low)/2;
  int noOfDaysRequired = solve(weights, mid);
  if(noOfDaysRequired <= days)
  {
    high = mid-1;

  }
  else{
    low = mid+1;
  }
}
return low;
    }
};