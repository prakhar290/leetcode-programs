//question//

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given an integer, convert it to a roman numeral.

 

Example 1:

Input: num = 3
Output: "III"
Example 2:

Input: num = 4
Output: "IV"
Example 3:

Input: num = 9
Output: "IX"
Example 4:

Input: num = 58
Output: "LVIII"
Explanation: L = 50, V = 5, III = 3.
Example 5:

Input: num = 1994
Output: "MCMXCIV"
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 

Constraints:

1 <= num <= 3999


//solution//


class Solution {
public:
    string intToRoman(int num) {
        string s = "";
        while(num>0)
        {
            if(num>=4 && num<5)
            {
                s = s+'I'+'V';
                num-=4;
            }
            else if(num>=9 && num<10)
            {
                s = s+'I'+'X';
                num-=9;
            }
            else if(num>=40 && num<50)
            {
                s = s+'X'+'L';
                num-=40;
            }
            else if(num>=90 && num<100)
            {
                s = s+'X'+'C';
                num-=90;
            }
            else if(num>=400 && num<500)
            {
                s = s+'C'+'D';
                num-=400;
            }
            else if(num>=900 && num<1000)
            {
                s = s+'C'+'M';
                num-=900;
            }
            else if(num>=1000)
            {
                s = s+'M';
                num-=1000;
            }
            else if(num>=500 && num<1000)
            {
                s = s+'D';
                num-=500;
            }
            else if(num>=100 && num<500)
            {
                s = s+'C';
                num-=100;
            }
            else if(num>=50 && num<100)
            {
                s = s+'L';
                num-=50;
            }
            else if(num>=10 && num<50)
            {
                s = s+'X';
                num-=10;
            }
            else if(num>=5 && num<10)
            {
                s = s+'V';
                num-=5;
            }
            else if(num>=1 && num<5)
            {
                s = s+'I';
                num-=1;
            }
        }
        return s;
    }
};