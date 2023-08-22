class Solution {
public:
    string convertToTitle(int columnNumber) {
        string output;
        
        while(columnNumber > 0)
        {
            columnNumber--;
            
        int m = columnNumber%26;
            columnNumber = columnNumber/26;
            output += 'A'+m;
            
        }
        //reverse print from right to left
        reverse(output.begin(),output.end());
        return output;
    }
};