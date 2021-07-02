//question//

Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.

 

Example 1:

Input: x = 4
Output: 2
Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned.
 

Constraints:

0 <= x <= 231 - 1



//solution//

class Solution {
public:
    int mySqrt(int x) {
       //int ans = sqrt(x);    this is the solution using built-in dunction to find square root of any number.

        int ans=0;
        if(x==1)
        {
            return 1;
        }
        for(unsigned int i=1;i<=x/2;i++)
        {
            if(i*i==x)
            {
                ans = i;
                break;
            }
            else if(i*i<x && (i+1)*(i+1)>x)
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};