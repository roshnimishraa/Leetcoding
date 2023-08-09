class Solution {
 int findMax(vector<int> &v){
       int maxi=INT_MIN;
        for(int i=0;i<v.size();i++){
            maxi=max(v[i],maxi);
}
        return maxi;
    }
    
long long calculateHours(vector<int> &v,int hourly){
long long totalH=0;
    for(int i=0;i<v.size();i++){
       totalH += ceil((double)(v[i])/(double)(hourly));
    }
    return totalH;
}
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long  low=1;
        long long high=findMax(piles);
        while(low<=high){
            long long mid=(low+high)/2;
     long long totalH = calculateHours(piles,mid);
            if(totalH <= h){
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};