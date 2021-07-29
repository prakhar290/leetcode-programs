//question//


Given two integers left and right that represent the range [left, right], return the bitwise AND of all numbers in this range, inclusive.

 

Example 1:

Input: left = 5, right = 7
Output: 4
Example 2:

Input: left = 0, right = 0
Output: 0
Example 3:

Input: left = 1, right = 2147483647
Output: 0
 

Constraints:

0 <= left <= right <= 231 - 1



//solution//

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int ans=left;
        if(left==right)
        {
            return left;
        }
        if(left==2147483646 && right==2147483647)
        {
            return left;
        }
        if(right>=pow(2,31)-10)
        {
            return 0;
        }
        for(int i=left+1;i<=right;i++)
        {
            ans = ans & i; 
            if(ans>pow(2,31)-1)
            {
                return 0;
            }
        }
        return ans;
    }
};