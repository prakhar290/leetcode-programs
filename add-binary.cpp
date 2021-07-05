//question-67//

Given two binary strings a and b, return their sum as a binary string.

 

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
 

Constraints:

1 <= a.length, b.length <= 104
a and b consist only of '0' or '1' characters.
Each string does not contain leading zeros except for the zero itself.



//solution//


class Solution {
public:
    string addBinary(string a, string b) {
      int n1 = a.size();
        int n2 = b.size();
        int carry = 0;
        int i = n1-1;
        int j = n2-1;
        string s = "";
        while(i>=0 || j>=0)
        {
            int ad,bd;
            if(i>=0)
            {
                ad = a[i]-'0';
            }
            else
            {
                ad = 0;
            }
            if(j>=0)
            {
                bd = b[j]-'0';
            }
            else
            {
                bd = 0;
            }
            int sum = ad + bd + carry;    
            carry = sum/2;
            sum = sum%2;
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