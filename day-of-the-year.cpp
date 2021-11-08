//question//


Given a string date representing a Gregorian calendar date formatted as YYYY-MM-DD, return the day number of the year.

 

Example 1:

Input: date = "2019-01-09"
Output: 9
Explanation: Given date is the 9th day of the year in 2019.
Example 2:

Input: date = "2019-02-10"
Output: 41
Example 3:

Input: date = "2003-03-01"
Output: 60
Example 4:

Input: date = "2004-03-01"
Output: 61
 

Constraints:

date.length == 10
date[4] == date[7] == '-', and all other date[i]'s are digits
date represents a calendar date between Jan 1st, 1900 and Dec 31, 2019.


//solution//


class Solution {
public:
    int dayOfYear(string date) {
      int day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        int yy=0,mm=0,dd=0,count=0;
        for(int i=0;i<date.size();i++)
        {
            if(i<4)
            {
                yy = yy*10 + (date[i]-'0');
            }
            else if(i>4 && i<7)
            {
                mm = mm*10 + (date[i]-'0');
            }
            else if(i>7)
            {
                dd = dd*10 + (date[i]-'0');
            }
        }
        if(yy%4==0 && mm>2)
        {
            count += 1;
        }
        for(int i=0;i<mm-1;i++)
        {
            count += day[i];
        }
        count += dd;
        return count;
    }
};