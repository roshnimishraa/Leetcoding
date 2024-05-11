class Solution {
public:
    string addStrings(string num1, string num2) {
         string ans =  "";
   int it1 = num1.length()-1;
        int it2 = num2.length()-1;
        int carry = 0;
        int sum = 0;
        while(it1>=0 && it2>=0){
            int digit1 = num1[it1] -'0';
            int digit2 = num2[it2] - '0';
            sum = digit1 + digit2 + carry;
            carry = sum/10;
            sum = sum%10;
            ans =  to_string(sum) + ans;
            it1--;
            it2--;
        }

        while(it1>=0){
            int digit1 = num1[it1] -'0';
            sum = digit1 +  carry;
            carry = sum/10;
            sum = sum%10;
 ans =  to_string(sum) + ans;

            it1--;
        }


        while(it2>=0){
            int digit2 = num2[it2] -'0';
            sum = digit2 +  carry;
            carry = sum/10;
            sum = sum%10;
        ans =  to_string(sum) + ans;

            it2--;
        }

        if(carry==1){
            ans =  "1"+ans ;
        }

        return ans;
    }
};