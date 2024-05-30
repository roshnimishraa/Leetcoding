class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n =arr.size();
        int i=0,j=n-1;
        vector<int> ans;

while(j-i+1 > k){
  if(abs(arr[i]-x)<=abs(x-arr[j]))
    {
        j--;
    }
    else{
        i++;
    }
}

while(i<=j){
    ans.push_back(arr[i++]);
    }
return ans;
    }
};