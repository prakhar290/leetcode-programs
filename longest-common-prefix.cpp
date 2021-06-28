//question//

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lower-case English letters.



//solution//


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
        char ch;
        string s="";
        sort(strs.begin(),strs.end());//sorting the strings 
        int last = min(strs[0].size(),strs[len-1].size()); //finding the minimum length
        int i=0;
        string first = strs[0], lasts = strs[len-1]; /*if the prefix of first string mathces /with the prefix of last string then it will become our longest common prefix because strings are sorted so if the character of first and alst string matches so it will mathc automatically with the character of other strings present in the array*/ 
        while(i<last && first[i]==lasts[i])
        {
            i++;
        }
        s = first.substr(0,i); //making substring 
        return s;
        
    }
};