class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg;
        
        int n = nums.size();
for(int i=0;i<n;i++){
    if(nums[i] > 0){
        pos.push_back(nums[i]);
        
    }
    else{
        neg.push_back(nums[i]);
    }
}
        
int i=0,j=0,k=0;
while(i<pos.size() && j<neg.size()){
    nums[k] = pos[i];
    k++;
 i++;
    
    nums[k] = neg[j];
    k++;
    j++;
    
}
        while(i<pos.size()){
        nums[k] = pos[i];
            k++;
            i++;
        }
        while(j<neg.size()){
            nums[k] = neg[j];
            k++;
            j++;
        }
        return nums;
    }
};