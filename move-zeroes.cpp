//question//

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
 


//solution//


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       vector<int> v;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                v.push_back(nums[i]);
            }
            else
            {
                count++;
            }
        }
        while(count>0)
        {
            v.push_back(0);
            count--;
        }
        for(int i=0;i<v.size();i++)
        {
            nums[i]=v[i];
        }
    }
};