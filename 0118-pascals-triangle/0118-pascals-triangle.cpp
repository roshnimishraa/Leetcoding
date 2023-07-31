class Solution {
vector<int>generateRow(int numRows){
    vector<int> ansRow;
        long long ans=1; //1 element of a row always 1
      //pushing 1st element 
        ansRow.push_back(1);
        for(int col=1;col<numRows;col++){
            ans = ans*(numRows - col);
            ans = ans/col;
             ansRow.push_back(ans);
        }
       return ansRow;
}
public:
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};