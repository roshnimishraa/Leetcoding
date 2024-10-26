class Solution {
public:
unordered_map<string,int> m;

void solve(int i,int j,string s,vector<vector<char>>& board,
vector<string> &ans,unordered_map<string,int> &mp){
     if(mp.find(s)==mp.end()) return; 
    if(i<0 || j<0 || j>=board[0].size() || i>=board.size()) return;

    char old=board[i][j];
    board[i][j]='*';
   
    if(m.find(s)!=m.end()){ ans.push_back(s);
    m.erase(s);}
    if(i-1>=0 && board[i-1][j]!='*'){
        solve(i-1,j,s+board[i-1][j],board,ans,mp);
    }
    if(i+1<board.size() && board[i+1][j]!='*'){
        solve(i+1,j,s+board[i+1][j],board,ans,mp);
    }
    if(j-1>=0 && board[i][j-1]!='*'){
        solve(i,j-1,s+board[i][j-1],board,ans,mp);
    }
    if(j+1<board[0].size() && board[i][j+1]!='*'){
        solve(i,j+1,s+board[i][j+1],board,ans,mp);
    }
    board[i][j]=old;
}
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        for(int i=0;i<words.size();i++){
            m[words[i]]++;
        }
       
        vector<string> ans;
        unordered_map<string,int> mp; //for storing prefixes of words 
        for(auto i:words)
        {
            string t="";
            for(int j=0;j<i.size();j++)
            {
                t+=i[j];
                mp[t]=1;
            }
        }
     
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(m.size()==0) return ans;
                    string temp="";

                    temp+=board[i][j];
                    solve(i,j,temp,board,ans,mp);
                
            }
        }
        return ans;
    }
};