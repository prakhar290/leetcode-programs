//question//

Given an unsorted integer array nums, find the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses constant extra space.

 

Example 1:

Input: nums = [1,2,0]
Output: 3
Example 2:

Input: nums = [3,4,-1,1]
Output: 2
Example 3:

Input: nums = [7,8,9,11,12]
Output: 1
 

Constraints:

1 <= nums.length <= 5 * 105
-231 <= nums[i] <= 231 - 1



//solution//

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
                v.push_back(nums[i]);
        }
        vector<int> v2;
        for(int i=0;i<v.size();i++)
        {
            v2.push_back(v[i]);
            if(i>0 && (v[i]==v[i-1]))
            {
                v2.pop_back();
            }
        }
        int count = 1;
        bool flag = true;
        int i;
        int len = v2.size();
        for(i=0;i<len;i++)
        {
            if(count==v2[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        return count;
        
    }
};