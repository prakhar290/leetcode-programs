//question//

Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.

 

Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Example 3:

Input: digits = [0]
Output: [1]
 

Constraints:

1 <= digits.length <= 100
0 <= digits[i] <= 9



//solution//


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> v;
        int n = digits.size();
        digits[n-1] = digits[n-1] + 1;
        int carry = digits[n-1]/10;
        digits[n-1] = digits[n-1]%10;
        for(int i=n-2;i>=0;i--)
        {
            if(carry==1)
            {
                digits[i] += 1;
                carry = digits[i]/10;
                digits[i] = digits[i]%10;
            }
        }
        if(carry==1)
        {
            digits.insert(digits.begin(),1);
        }
        for(int i=0;i<digits.size();i++)
        {
            v.push_back(digits[i]);
        }
        return v;
    }
};