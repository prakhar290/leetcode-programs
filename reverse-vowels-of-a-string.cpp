//question//

Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both cases.

 

Example 1:

Input: s = "hello"
Output: "holle"
Example 2:

Input: s = "leetcode"
Output: "leotcede"
 

Constraints:

1 <= s.length <= 3 * 105
s consist of printable ASCII characters.


//solution//

class Solution {
public:
    string reverseVowels(string s) {
       int n = s.size();
        int a  = n;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' ||
              s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
            {
                for(int j=a-1;j>0;j--)
                {
                    
            if(i<j && (s[j]=='a' || s[j]=='A' || s[j]=='e' || s[j]=='E' || s[j]=='i' ||                      s[j]=='I' || s[j]=='o' || s[j]=='O' || s[j]=='u' || s[j]=='U'))
            {
                char ch = s[j];
                s[j] = s[i];
                s[i] = ch;
                a = j;
                break;
            }
                }
            }
        }
        return s;
    }
};