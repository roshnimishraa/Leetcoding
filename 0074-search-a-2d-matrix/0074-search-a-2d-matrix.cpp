class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        
		// if matrix have 0 rows or 0 colums
        if(n == 0 || m == 0)
            return false;
        
	
        int start = 0, end = m*n - 1;
        
        while(start <= end)
        {
     int mid = start + (end - start) / 2;
			// a[x] : matrix[x / m][x % m] formulae
            int indexValue = matrix[mid/m][mid%m];
            if (target == indexValue)
                return true;
			// left half
            else if(target < indexValue)
                end = mid - 1;
            else
			// right half
                start = mid + 1;       
        }
        return false;
    }
	
};