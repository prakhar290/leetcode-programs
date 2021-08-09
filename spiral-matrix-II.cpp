//question//

Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

 

Example 1:


Input: n = 3
Output: [[1,2,3],[8,9,4],[7,6,5]]
Example 2:

Input: n = 1
Output: [[1]]
 

Constraints:

1 <= n <= 20


//solution//


class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n, vector<int>(n));
        int rows = 0,cols = 0, rowe = n-1,cole = n-1;
        int num = 1;
        while(rows<=rowe &&cols<=cole && num<=n*n)
        {
            for(int j=cols;j<=cole;j++)
            {
                mat[rows][j] = num;
                num++;
            }
            rows++;
            for(int i=rows;i<=rowe;i++)
            {
                mat[i][cole] = num;
                num++;
            }
            cole--;
            for(int j=cole;j>=cols;j--)
            {
                mat[rowe][j] = num;
                num++;
            }
            rowe--;
            for(int i=rowe;i>=rows;i--)
            {
                mat[i][cols] = num;
                num++;
            }
            cols++;
        }
        return mat;
    }
};