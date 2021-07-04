//question//

Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

Follow-up: Could you solve the problem in linear time and in O(1) space?

 

Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]
Example 3:

Input: nums = [1,2]
Output: [1,2]
 

Constraints:

1 <= nums.length <= 5 * 104
-109 <= nums[i] <= 109



//solution//

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=i;j<n;j++)
            {
                if(nums[j]==nums[i])
                {
                    count++;
                }
                
            }
            cout<<count<<" ";
            if(count>n/3)
            {
                v.push_back(nums[i]);
                i = i+count-1;
            }
        }
        return v;
    
    }
};