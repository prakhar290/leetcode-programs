//question//


Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.

 

Example 1:

Input: n = 5
Output: true
Explanation: The binary representation of 5 is: 101
Example 2:

Input: n = 7
Output: false
Explanation: The binary representation of 7 is: 111.
Example 3:

Input: n = 11
Output: false
Explanation: The binary representation of 11 is: 1011.
 

Constraints:

1 <= n <= 231 - 1


//solution//


class Solution {
public:
    bool hasAlternatingBits(int n) {
        string num = "";
        while(n!=0)
        {
            int rem = n%2;
            num = num + to_string(rem);
            n = n/2;
        }
        if(num[0]==num[1])
        {
            return false;
        }
        for(int i=0;i<num.size();i++)
        {
            if((i%2==0 && num[i]==num[0]) || (i%2!=0 && num[i]==num[1]) )
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};