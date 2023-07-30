class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();
        int m = matrix[0].size();
        if(n==0 || m==0){
            return false;
        }
//    linearly sorted 
        int low = 0;
        int high = (n*m)-1;
        while(low <= high){
            int mid = (low + high)/2;
            int indexValue = matrix[mid/m][mid%m];
            if( indexValue == target){
                return true;
            }
            else if(indexValue > target){
 high = mid-1;
            }
            else {
                low = mid+1;
            }
            
        }
        return false;
    }
};