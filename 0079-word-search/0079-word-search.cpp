class Solution {

bool search(int i,int j,int n,int m,vector<vector<char>>& board,string word,int k)
{
       
    if(k == word.size() )
       return true ;
    if(i<0 || i==n || j<0 || j==m || board[i][j] != word[k])
        return false;

  
    char ch = board[i][j] ;
    
    // We change board[i][j] to # so that we don't visit the Same Cell again
    
    board[i][j] = '#' ;

//     Down 
    bool op1 = search(i+1,j,n,m,board,word, k + 1);
//     up
bool op2 = search(i-1,j,n,m,board,word, k + 1);
// left 
    bool op3 = search(i,j-1,n,m,board,word, k + 1);
//     right 
    bool op4 = search(i,j+1,n,m,board,word, k + 1);
    
        
    // We backtrack and change the value of board[i][j] to it's original character stored in ch variable
    
    board[i][j] = ch ;
    
    return op1 || op2 || op3 || op4;
    

    }
    public:
    bool exist(vector<vector<char>>& board, string word) {
        
      int n = board.size();
        int m = board[0].size(); 
            int k = 0;
//     calling cells one by one
        for(int i =0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j] == word[0])
                    
    
                // k=word.size();
                if(search(i,j,n,m,board,word,0))
                    return true;
            }
        }
        return false;
    }
};