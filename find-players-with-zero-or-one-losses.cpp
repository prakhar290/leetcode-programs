//question//


You are given an integer array matches where matches[i] = [winneri, loseri] indicates that the player winneri defeated player loseri in a match.

Return a list answer of size 2 where:

answer[0] is a list of all players that have not lost any matches.
answer[1] is a list of all players that have lost exactly one match.
The values in the two lists should be returned in increasing order.

Note:

You should only consider the players that have played at least one match.
The testcases will be generated such that no two matches will have the same outcome.
 

Example 1:

Input: matches = [[1,3],[2,3],[3,6],[5,6],[5,7],[4,5],[4,8],[4,9],[10,4],[10,9]]
Output: [[1,2,10],[4,5,7,8]]
Explanation:
Players 1, 2, and 10 have not lost any matches.
Players 4, 5, 7, and 8 each have lost one match.
Players 3, 6, and 9 each have lost two matches.
Thus, answer[0] = [1,2,10] and answer[1] = [4,5,7,8].
Example 2:

Input: matches = [[2,3],[1,3],[5,4],[6,4]]
Output: [[1,2,5,6],[]]
Explanation:
Players 1, 2, 5, and 6 have not lost any matches.
Players 3 and 4 each have lost two matches.
Thus, answer[0] = [1,2,5,6] and answer[1] = [].
 

Constraints:

1 <= matches.length <= 105
matches[i].length == 2
1 <= winneri, loseri <= 105
winneri != loseri
All matches[i] are unique.


//solution//

----------- failed at test case 122/127 because of time limit exceeded-----------

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> answer;
        vector<int> winner;
        vector<int> loser;
        for(int i=0;i<matches.size();i++){
            int loss = 0, lose = 0;
            for(int j=0;j<matches.size();j++){
                if(matches[i][0]==matches[j][1]){
                    loss++;
                }
                if(matches[i][1]==matches[j][1]){
                    lose++;
                }
            }
            if(loss==0){
                bool same1 = false;
                for(int x=0;x<winner.size();x++){
                    if(matches[i][0]==winner[x]){
                        same1 = true;
                        break;
                    }
                }
                if(same1==false)
                winner.push_back(matches[i][0]);
            }
            if(lose==1){
                bool same  = false;
                for(int k=0;k<loser.size();k++){
                    if(matches[i][1]==loser[k]){
                        same = true;
                        break;
                    }
                }
                if(same!=true)
                loser.push_back(matches[i][1]);
            }
        }
        sort(winner.begin(), winner.end());
        sort(loser.begin(), loser.end());
        answer.push_back(winner);
        answer.push_back(loser);
        return answer;
    }
};