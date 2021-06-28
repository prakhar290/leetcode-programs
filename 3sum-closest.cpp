//question//

Given an array nums of n integers and an integer target, find three integers in nums such that the sum is closest to target. Return the sum of the three integers. You may assume that each input would have exactly one solution.

 

Example 1:

Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
 

Constraints:

3 <= nums.length <= 10^3
-10^3 <= nums[i] <= 10^3
-10^4 <= target <= 10^4


//solution//


class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int len = nums.size();
        int ans=0;
        int find=INT_MAX;
        for(int i=0;i<len;i++)
        {
            for(int j=i+1;j<len;j++)
            {
                for(int k=j+1;k<len;k++)
                {
                    int sum=0,diff=0;
                    sum = nums[i]+nums[j]+nums[k];
                    diff = abs(sum-target);
                    if(find>min(diff,find))
                    {
                        find = min(diff,find);
                        ans = nums[i]+nums[j]+nums[k];
                    }
                    
                    
                }
            }
        }
        return ans;
    }
};