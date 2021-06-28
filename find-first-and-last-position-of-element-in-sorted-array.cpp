//question//

Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You can try to write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
 

Constraints:

0 <= nums.length <= 105
-109 <= nums[i] <= 109
nums is a non-decreasing array.
-109 <= target <= 109


//solution//


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        bool flag = false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                v.push_back(i);
                flag = true;
            }
        }

        vector <int> ans;
        if(flag==true)
        {
            ans.push_back(v[0]);
            ans.push_back(v[v.size()-1]);
        }
        else
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
};