class Solution {
public:
    string clearDigits(string s) {
        int i=0;
        string ans;
        while(i<s.length()){
          if(!isdigit(s[i]))
          {
       ans += s[i];
       }
          else{
      if(ans.size()>0){
            ans.pop_back();
          }
    }
      i++;
        }
        return ans;
    }
};