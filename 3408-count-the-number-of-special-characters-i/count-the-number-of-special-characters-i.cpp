class Solution {
public:
    int numberOfSpecialChars(string word) {
            int n = word.size();
        int ans=0;
        for(int i=0;i<26;i++){
            int firstOccurenceOfUpper = -1;
            int lastOccurenceOfLower = -1;
            for(int j=0;j<n;j++){
                if(word[j]==('A'+i)){
                    firstOccurenceOfUpper=j;
                    break;
                }
            }
            for(int j=n-1;j>=0;j--){
                if(word[j]==('a'+i)){
                    lastOccurenceOfLower=j;
                    break;
                }
            }
            if(firstOccurenceOfUpper!=-1
               &&lastOccurenceOfLower!=-1){
                ans++;
            }
        }
        return ans;
    }
};