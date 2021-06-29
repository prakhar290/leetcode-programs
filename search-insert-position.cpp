//question//

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You should try to write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
Example 4:

Input: nums = [1,3,5,6], target = 0
Output: 0
Example 5:

Input: nums = [1], target = 0
Output: 0
 

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104



//solution//

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int beg=0,end = nums.size()-1;
        int mid=0,ans=0;
        if(target<=nums[beg])
        {
            return 0;
        }
        else if(target>nums[end])
        {
            return end+1;
        }
        /*bool flag=false;
        while(beg!=end)
        {
            mid = (beg+end)/2;
            if(nums[mid]==target)
            {
                //flag = true;
                return mid;
            }
            else if(nums[mid]<target)
            {
                if(target-nums[mid]==1)
                {
                    return mid+1;
                }
                else
                    beg = mid+1;
            }
            else if(nums[mid]>target)
            {
                if(nums[mid]-target==1)
                {
                    return mid;
                }
                else
                    end = mid-1;
            }
        }
//-------------------------trying to get the solution by writing an algo with O(log n) complexity--------------//

        /*if(flag==false){
        beg=0,end=nums.size()-1;
           while(beg<=end)
           {
               if(target-nums[beg]==1)
               {
                   ans = beg+1;
               }
               else if(nums[end]-target==1)
               {
                   ans = end-1;
               }
               else
               {
                   beg++;
                   end--;
               }
           }
        }*/
//--------------------if you write this algo and run the program you get 54/62 test cases passed--------------//\


//----------this is the solution with algo of O(n) complexity----------------//

            for(int i=0;i<nums.size();i++)
            {
                if(target>nums[i] && target<=nums[i+1])
                {
                    ans = i+1;
                    break;
                }
            }
        return ans;
    }
};