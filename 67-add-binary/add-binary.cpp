class Solution {
public:
    string addBinary(string a, string b) {
       string ans;
    int i=a.length()-1;
    int j=b.length()-1;
int carry =0;
while(i>=0 || j>=0)
{
    // sum = A[i]+B[j]+carry
// initially sum = 0 carry =0
int sum = carry;
if(i>=0)
{
    sum += a[i]-'0'; //convert string to int
    i--;
}
if(j>=0)
{
    sum+= b[j]-'0';
    j--;
}
carry = sum/2;  //carry = sum>1 : 1:0
ans += to_string(sum%2);
}

if(carry == 1)
{
    ans += '1';
}
reverse(ans.begin(),ans.end());
return ans;
}
};