class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int n=matrix.size();
        int m=matrix[0].size();
    
//      array out of bound
        if(n==0 || m==0){
            return false;
        }
        int low=0;
        int high =(m*n)-1;
        while(low <= high){
            int mid=low + (high - low)/2;
            
            int indexVal = matrix[mid/m][mid%m];
        
            if(indexVal< target){
            low = mid+1;
        }
            else if (target == indexVal){
                return true;
            }
            else if(indexVal > target ){
               high = mid-1;
            }
        }
        return false;
    }
};