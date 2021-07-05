//question-415//

Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

 

Example 1:

Input: num1 = "11", num2 = "123"
Output: "134"
Example 2:

Input: num1 = "456", num2 = "77"
Output: "533"
Example 3:

Input: num1 = "0", num2 = "0"
Output: "0"
 

Constraints:

1 <= num1.length, num2.length <= 104
num1 and num2 consist of only digits.
num1 and num2 don't have any leading zeros except for the zero itself.



//solution//

class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();
        int carry = 0;
        int i = n1-1;
        int j = n2-1;
        string s = "";
        while(i>=0 || j>=0)
        {
            int ad,bd;
            if(i>=0)
            {
                ad = num1[i]-'0';
            }
            else
            {
                ad = 0;
            }
            if(j>=0)
            {
                bd = num2[j]-'0';
            }
            else
            {
                bd = 0;
            }
            int sum = ad + bd + carry;    
            carry = sum/10;
            sum = sum%10;
            s = s + to_string(sum);
            i--;
            j--;
        }
        if(carry==1)
            s = s + to_string(carry);
        reverse(s.begin(),s.end());
        return s;
    
    }
};