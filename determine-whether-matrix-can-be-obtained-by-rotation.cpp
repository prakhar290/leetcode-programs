//question//

Given two n x n binary matrices mat and target, return true if it is possible to make mat equal to target by rotating mat in 90-degree increments, or false otherwise.

 

Example 1:
0 1    ===>>    1 0
1 0    ===>>    0 1

Input: mat = [[0,1],[1,0]], target = [[1,0],[0,1]]
Output: true
Explanation: We can rotate mat 90 degrees clockwise to make mat equal target.
Example 2:
0 1   ====>>    1 0
1 1   ====>>    0 1

Input: mat = [[0,1],[1,1]], target = [[1,0],[0,1]]
Output: false
Explanation: It is impossible to make mat equal to target by rotating mat.
Example 3:
0 0 0                  1 1 1 
0 1 0     =====>>>     0 1 0
1 1 1                  0 0 0

Input: mat = [[0,0,0],[0,1,0],[1,1,1]], target = [[1,1,1],[0,1,0],[0,0,0]]
Output: true
Explanation: We can rotate mat 90 degrees clockwise two times to make mat equal target.
 

Constraints:

n == mat.length == target.length
n == mat[i].length == target[i].length
1 <= n <= 10
mat[i][j] and target[i][j] are either 0 or 1.



//solution//


class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        int rotate = 3;
        bool final_flag = false;
        while(rotate>=0){
        for(int i=0;i<n/2;i++)
        {
            vector<int> temp = mat[i];
            mat[i] = mat[n-i-1];
            mat[n-i-1] = temp;
            
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i<=j)
                {
                    int temp = mat[i][j];
                    mat[i][j]=mat[j][i];
                    mat[j][i]=temp;
                }
            }
        }
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==target[i][j])
                {
                    continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if(flag==false)
            {
                break;
            }
        }
            if(flag==true)
            {
                final_flag = true;
                break;
            }
            rotate--;
        }
    return final_flag;
    }
};