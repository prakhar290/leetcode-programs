//qustion//


Given an alphanumeric string s, return the second largest numerical digit that appears in s, or -1 if it does not exist.

An alphanumeric string is a string consisting of lowercase English letters and digits.

 

Example 1:

Input: s = "dfa12321afd"
Output: 2
Explanation: The digits that appear in s are [1, 2, 3]. The second largest digit is 2.
Example 2:

Input: s = "abc1111"
Output: -1
Explanation: The digits that appear in s are [1]. There is no second largest digit. 
 

Constraints:

1 <= s.length <= 500
s consists of only lowercase English letters and/or digits.



//solution//


class Solution {
public:
    int secondHighest(string s) {
     vector<int> v;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                v.push_back(s[i]-'0');
            }
        }
        sort(v.begin(),v.end());
        vector<int>v2;
        for(int i=0;i<v.size();)
        {
            v2.push_back(v[i]);
            int count = 1;
            for(int j=i+1;j<v.size();j++)
            {
                if(v[j]!=v[i])
                {
                    break;
                }
                else
                    count++;
            }
            i = i + count;
        }
        if(v2.size()<2)
        {
            return -1;
        }
        return v2[v2.size()-2];
    }
};