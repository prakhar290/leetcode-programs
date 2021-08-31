//question//


Given an array of integers arr, write a function that returns true if and only if the number of occurrences of each value in the array is unique.

 

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
 

Constraints:

1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000




//solution//



class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       vector<int> count;
        int counts=1;
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]!=arr[i-1])
            {
                count.push_back(counts);
                counts=1;
            }
            else
            {
                counts++;
            }
        }
        count.push_back(counts);
        for(int i=0;i<count.size();i++)
        {
             for(int j=i+1;j<count.size();j++)
             {
                 if(count[i]==count[j])
                 {
                     return false;
                 }
             }
        }
        return true;
    }
};