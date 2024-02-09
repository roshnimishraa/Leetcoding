class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index=0;
        int i=0;
while(i<n)
{
    char currChar = chars[i];
    int count=0;
while(i<n && chars[i] == currChar)
{
    count++;
    i++;
}
// assign work 
chars[index] = currChar;
index++;
if(count > 1)
{
string count_str = to_string(count);
for(auto it:count_str)
{
 chars[index] = it;
 index++;
}
}

}
return index;
    }
};