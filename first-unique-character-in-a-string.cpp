//question//

Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

 

Example 1:

Input: s = "leetcode"
Output: 0
Example 2:

Input: s = "loveleetcode"
Output: 2
Example 3:

Input: s = "aabb"
Output: -1
 

Constraints:

1 <= s.length <= 105
s consists of only lowercase English letters.


//solution//

class Solution {
public:
    int firstUniqChar(string s) {
        for(int i=0;i<s.size();i++)
        {
            bool flag = true;
            for(int j=0;j<s.size();j++)
            {
                if(i==j)
                {
                    continue;
                }
                else if(s[j]==s[i])
                {
                    flag = false;
                    break;
                }
            }
            if(flag==true)
            {
                return i;
            }
        }
        return -1;
    }
};