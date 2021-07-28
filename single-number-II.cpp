//question//


Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,3,2]
Output: 3
Example 2:

Input: nums = [0,1,0,1,0,1,99]
Output: 99
 

Constraints:

1 <= nums.length <= 3 * 104
-231 <= nums[i] <= 231 - 1
Each element in nums appears exactly three times except for one element which appears once.



//solution//


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();)
        {
            int count=0;
            for(int j=i;j<nums.size();j++)
            {
                if(nums[j]==nums[i])
                {
                    ++count;
                }
                else
                {
                    break;
                }
            }
            cout<<count<<" ";
            if(count==3)
            {
                i += 3;
            }
            else
            {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};