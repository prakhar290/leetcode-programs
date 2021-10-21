//question//


Given an integer num, return a string of its base 7 representation.

 

Example 1:

Input: num = 100
Output: "202"
Example 2:

Input: num = -7
Output: "-10"
 

Constraints:

-107 <= num <= 107

//solution//


class Solution {
public:
    string convertToBase7(int num) {
        string s;
        if(num==0)
        {
            return "0";
        }
        int num1 = abs(num);
        while(num1>0)
        {
            int rem = num1%7;
            s += to_string(rem);
            num1 = num1/7;
        }
        if(num<0)
        {
            s += '-'; 
        }
        reverse(s.begin(),s.end());
        return s;
    }
};