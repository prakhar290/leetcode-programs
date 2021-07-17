//question//

Given an array nums of non-negative integers, return an array consisting of all the even elements of nums, followed by all the odd elements of nums.

You may return any answer array that satisfies this condition.

 

Example 1:

Input: nums = [3,1,2,4]
Output: [2,4,3,1]
The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
 

Note:

1 <= nums.length <= 5000
0 <= nums[i] <= 5000


//solution//

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector <int> v1,v2;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                v1.push_back(nums[i]);
            }
            else
            {
                v2.push_back(nums[i]);
            }
        }
        for(int i=0;i<v2.size();i++)
        {
            v1.push_back(v2[i]);
        }
        return v1;
    }
};