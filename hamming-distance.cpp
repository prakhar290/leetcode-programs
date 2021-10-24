//question//


The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, return the Hamming distance between them.

 

Example 1:

Input: x = 1, y = 4
Output: 2
Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑
The above arrows point to positions where the corresponding bits are different.
Example 2:

Input: x = 3, y = 1
Output: 1
 

Constraints:

0 <= x, y <= 231 - 1


//solution//

class Solution {
public:
    string binary(int num)
    {
        string s="";
        while(num>0)
        {
            int rem = num%2;
            s += to_string(rem);
            num = num/2;
        }
        reverse(s.begin(),s.end());
        return s;
        
    }
    int hammingDistance(int x, int y) {
        string s1 = binary(x);
        string s2 = binary(y);
        cout<<s1<<"  "<<s2;
        int count=0;
        int i=s1.size()-1,j=s2.size()-1;
        while(i>=0 && j>=0)
        {
            if(s1[i]!=s2[j])
            {
                count++;
            }
            i--;
            j--;
        }
        while(i>=0)
        {
            if(s1[i]=='1')
            {
                count++;
            }
            i--;
        }
        while(j>=0)
        {
            if(s2[j]=='1')
            {
                count++;
            }
            j--;
        }
        return count;
    }
};