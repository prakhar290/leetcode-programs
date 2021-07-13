//question//

An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

Given an integer n, return true if n is an ugly number.

 

Example 1:

Input: n = 6
Output: true
Explanation: 6 = 2 × 3
Example 2:

Input: n = 8
Output: true
Explanation: 8 = 2 × 2 × 2
Example 3:

Input: n = 14
Output: false
Explanation: 14 is not ugly since it includes the prime factor 7.
Example 4:

Input: n = 1
Output: true
Explanation: 1 has no prime factors, therefore all of its prime factors are limited to 2, 3, and 5.
 

Constraints:

-231 <= n <= 231 - 1



//solution//

class Solution {
public:
    bool isUgly(int n) {
        
        if(n<=pow(-2,31) || n>pow(2,31)-1)
        {
            return false;
        }
        while(n>0)
        {
            if(n==1)
            {
                return true;
            }
            if(n%2!=0 && n%3!=0 && n%5!=0)
            {
                return false;
            }
            if(n%2==0)
            {
                n = n/2;
            }
            if(n%3==0)
            {
                n = n/3;
            }
            if(n%5==0)
            {
                n = n/5;
            }
        }
        return false;
    }
};