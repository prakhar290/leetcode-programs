//question//


You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once. Find this single element that appears only once.

Follow up: Your solution should run in O(log n) time and O(1) space.

 

Example 1:

Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
Example 2:

Input: nums = [3,3,7,7,10,11,11]
Output: 10
 

Constraints:

1 <= nums.length <= 10^5
0 <= nums[i] <= 10^5



//solution//

//----this is the solution with O(n) time complexity------//

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans=0;
        int n= nums.size();
        if(n<2)
        {
            return nums[0];
        }
        if(nums[n-1]!=nums[n-2])
        {
            return nums[n-1];
        }
        for(int i=0;i<n;i+=2)
        {
            if(nums[i]!=nums[i+1])
            {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};

