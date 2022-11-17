//question//


Given the coordinates of two rectilinear rectangles in a 2D plane, return the total area covered by the two rectangles.

The first rectangle is defined by its bottom-left corner (ax1, ay1) and its top-right corner (ax2, ay2).

The second rectangle is defined by its bottom-left corner (bx1, by1) and its top-right corner (bx2, by2).

 

Example 1:

Rectangle Area
Input: ax1 = -3, ay1 = 0, ax2 = 3, ay2 = 4, bx1 = 0, by1 = -1, bx2 = 9, by2 = 2
Output: 45
Example 2:

Input: ax1 = -2, ay1 = -2, ax2 = 2, ay2 = 2, bx1 = -2, by1 = -2, bx2 = 2, by2 = 2
Output: 16
 

Constraints:

-104 <= ax1 <= ax2 <= 104
-104 <= ay1 <= ay2 <= 104
-104 <= bx1 <= bx2 <= 104
-104 <= by1 <= by2 <= 104


//solution//


class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int mx1,mx2,my1,my2;
        if(ax1<=bx1){
            mx1 = bx1;
        }else{
            mx1 = ax1;
        }
        if(ax2>bx1 && ax2<=bx2){
            mx2 = ax2;
        }else{
            mx2 = bx2;
        }
        if(ay1<=by1){
            my1=by1;
        }else{
            my1=ay1;
        }
        if(ay2>by1 && ay2<=by2){
            my2 = ay2;
        }else{
            my2 = by2;
        }
        if((bx1>=ax2)||(bx2<=ax1)|| by1>=ay2 ||ay1>=by2){
            mx1 = mx2 = my1= my2 = 0;
        }
        int a,b,m;
        a = abs((ax2-ax1)*(ay2-ay1));
        b = abs((bx2-bx1)*(by2-by1));
        m = abs((mx2-mx1)*(my2-my1));
        int ans = a+b-m;
        cout<<"a"<<a<<" b"<<b<<" m"<<m;
        return ans;
    }
};