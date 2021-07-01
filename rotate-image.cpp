//question//

You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

 

Example 1:
1 2 3              7 4 1
4 5 6    ===>>     8 5 2
7 8 9              9 6 3

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]
Example 2:
5 1 9 11                     15 13 2 5
2 4 8 10        =====>>      14  3 4 1
13 3 6 7        =====>>      12  6 8 9
15 14 12 16                  16  7 10 11

Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
Example 3:
1    ====>>    1

Input: matrix = [[1]]
Output: [[1]]
Example 4:
1 2   ===>>    3 1
3 4   ===>>    4 2

Input: matrix = [[1,2],[3,4]]
Output: [[3,1],[4,2]]
 

Constraints:

matrix.length == n
matrix[i].length == n
1 <= n <= 20
-1000 <= matrix[i][j] <= 1000




//solution//


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n/2;i++)
        {
            vector<int> temp = matrix[i];
            matrix[i] = matrix[n-i-1];
            matrix[n-i-1] = temp;
            
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<matrix[j][i]<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i<=j)
                {
                    int temp = matrix[i][j];
                    matrix[i][j]=matrix[j][i];
                    matrix[j][i]=temp;
                }
            }
        }
    }
};