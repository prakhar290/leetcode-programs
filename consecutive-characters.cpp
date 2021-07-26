//question//

Given a string s, the power of the string is the maximum length of a non-empty substring that contains only one unique character.

Return the power of the string.

 

Example 1:

Input: s = "leetcode"
Output: 2
Explanation: The substring "ee" is of length 2 with the character 'e' only.
Example 2:

Input: s = "abbcccddddeeeeedcba"
Output: 5
Explanation: The substring "eeeee" is of length 5 with the character 'e' only.
Example 3:

Input: s = "triplepillooooow"
Output: 5
Example 4:

Input: s = "hooraaaaaaaaaaay"
Output: 11
Example 5:

Input: s = "tourist"
Output: 1
 

Constraints:

1 <= s.length <= 500
s contains only lowercase English letters.


/solution//


class Solution {
public:
    int maxPower(string s) {
        int maxcount=INT_MIN;
        for(int i=0;i<s.size();)
        {
            int count = 0;
            char ch = s[i];
            for(int j=i;j<s.size();j++)
            {
                if(s[j]!=s[i])
                {
                    break;
                }
                count++;
            }
            maxcount = max(maxcount,count);
            i = i+count;
        }
        return maxcount;
    }
};