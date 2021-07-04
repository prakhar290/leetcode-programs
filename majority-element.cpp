//question//

Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-231 <= nums[i] <= 231 - 1



//solution//

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(nums[j]==nums[i])
                {
                    count++;
                }
                
            }
            if(count>n/2)
            {
                ans = nums[i];
                break;
            }
            else
                i = i+count;
        }
        return ans;
    }
};