//question//


Given an integer n, add a dot (".") as the thousands separator and return it in string format.

 

Example 1:

Input: n = 987
Output: "987"
Example 2:

Input: n = 1234
Output: "1.234"
Example 3:

Input: n = 123456789
Output: "123.456.789"
Example 4:

Input: n = 0
Output: "0"
 

Constraints:

0 <= n < 231


//solution//


class Solution {
public:
    string thousandSeparator(int n) {
        string s = to_string(n);
        string s2;
        for(int i=s.size()-1;i>=0;i--)
        {
            string s3="";
            int count = 0;
            while(i>=0 && count!=3)
            {
                s3 += s[i];
                i--;
                count++;
            }
            reverse(s3.begin(),s3.end());
            if(i>=0 && count==3)
            {
                s3.insert(0,".");
                //s2 += '.' + s3;
                s2.insert(0,s3);
                
                i++;
            }
            else
            {
                s2.insert(0,s3);
            }
        }
        return s2;
    }
};