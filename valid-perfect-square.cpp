//question//

Given a positive integer num, write a function which returns True if num is a perfect square else False.

Follow up: Do not use any built-in library function such as sqrt.

 

Example 1:

Input: num = 16
Output: true
Example 2:

Input: num = 14
Output: false
 

Constraints:

1 <= num <= 2^31 - 1



//solution//


class Solution {
public:
    bool isPerfectSquare(int num) {
        bool flag = false;
        if(num==1)
        {
            return true;
        }
        for(unsigned int i=1;i<=num/2;i++)
        {
            if(i*i==num)
            {
                flag = true;
                break;
            }
        }
        return flag;
        
    }
};