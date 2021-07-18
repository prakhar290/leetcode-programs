//question//

Given integer array nums, return the third maximum number in this array. If the third maximum does not exist, return the maximum number.

 

Example 1:

Input: nums = [3,2,1]
Output: 1
Explanation: The third maximum is 1.
Example 2:

Input: nums = [1,2]
Output: 2
Explanation: The third maximum does not exist, so the maximum (2) is returned instead.
Example 3:

Input: nums = [2,2,3,1]
Output: 1
Explanation: Note that the third maximum here means the third maximum distinct number.
Both numbers with value 2 are both considered as second maximum.
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
 

Follow up: Can you find an O(n) solution?


//solution//

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back(nums[i]);
            if(i>0 && nums[i]==nums[i-1])
            {
                v.pop_back();
            }
        }
        int len = v.size();
        int num;
        if(len==2)
        {
            return v[1];
        }
        else if(len==1)
        {
            return v[0];
        }
        else
        {
            num = v[len-3];
        }
        return num;
   }
};