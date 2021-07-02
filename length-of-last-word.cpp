//question//

Given a string s consists of some words separated by spaces, return the length of the last word in the string. If the last word does not exist, return 0.

A word is a maximal substring consisting of non-space characters only.

 

Example 1:

Input: s = "Hello World"
Output: 5
Example 2:

Input: s = " "
Output: 0
 

Constraints:

1 <= s.length <= 104
s consists of only English letters and spaces ' '.



//solution//


class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count=0;
        while(n>0)
        {
            if(s[n-1]!=' ')
            {
                break;
            }
            n--;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                count = 0;
            }
            else
            {
                count++;
            }
        }
        return count;
    }
};