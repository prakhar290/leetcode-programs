//question-1317//

Given an integer n. No-Zero integer is a positive integer which doesn't contain any 0 in its decimal representation.

Return a list of two integers [A, B] where:

A and B are No-Zero integers.
A + B = n
It's guarateed that there is at least one valid solution. If there are many valid solutions you can return any of them.

 

Example 1:

Input: n = 2
Output: [1,1]
Explanation: A = 1, B = 1. A + B = n and both A and B don't contain any 0 in their decimal representation.
Example 2:

Input: n = 11
Output: [2,9]
Example 3:

Input: n = 10000
Output: [1,9999]
Example 4:

Input: n = 69
Output: [1,68]
Example 5:

Input: n = 1010
Output: [11,999]
 

Constraints:

2 <= n <= 10^4



//solution//

class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int>v;
        bool flag = false;
        for(int i=0;i<n;i++)
        {
            int count=0;
            int a=i;
            while(a>0)
            {
                if(a%10==0)
                {
                    count++;
                }
                else
                    a = a/10;
                if(count>0)
                {
                    break;
                }
            }
            if(count>0)
            {
                continue;
            }
            for(int j=n/2;j<n;j++)
            {
                int count=0;
            int a=j;
            while(a>0)
            {
                if(a%10==0)
                {
                    count++;
                }
                else
                    a = a/10;
                if(count>0)
                {
                    break;
                }
            }
            if(count>0)
            {
                continue;
            }
                    if(i+j==n)
                    {
                        v.push_back(i);
                        v.push_back(j);
                        flag = true;
                        break;
                    }
                
            }
            if(flag==true)
            {
                break;
            }
        }
        return v;
    }
};