class Solution {
  
public:
    string reverseWords(string s) {
        
          int n =s.length();
        int left = 0 , right=0;
    int i=0;
        
//  1. Reverse the entire array
        reverse(s.begin(),s.end());
        while(i < n){    
    while(i < n && s[i] == ' '){
        i++;
    } 
      
while(i< n && s[i] != ' '){
    s[right++] = s[i++];
    
}

//2. Reverse word 
        if(left < right){
            reverse(s.begin()+left,s.begin()+right);
            
             // Add a space after the reversed word
        s[right++]=' ';
   
//update the left index for the next word
            left = right;
        }
    i++;
        }
         // Add a space after the reversed word
      s = s.substr(0,right-1);
        return s;
    }
};