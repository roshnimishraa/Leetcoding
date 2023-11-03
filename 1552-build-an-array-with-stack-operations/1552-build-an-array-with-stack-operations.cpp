class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
     vector<string> operations;
    int targetIndex=0;
int currentNumber =1 ;
while(targetIndex < target.size()){
    if(target[targetIndex] == currentNumber){
        operations.push_back("Push");
        targetIndex++;
    }
    else{
        operations.push_back("Push");
        operations.push_back("Pop");

    }
    currentNumber++;
}   
return operations;
    }
};