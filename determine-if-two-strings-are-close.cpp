//question//


Two strings are considered close if you can attain one from the other using the following operations:

Operation 1: Swap any two existing characters.
For example, abcde -> aecdb
Operation 2: Transform every occurrence of one existing character into another existing character, and do the same with the other character.
For example, aacabb -> bbcbaa (all a's turn into b's, and all b's turn into a's)
You can use the operations on either string as many times as necessary.

Given two strings, word1 and word2, return true if word1 and word2 are close, and false otherwise.

 

Example 1:

Input: word1 = "abc", word2 = "bca"
Output: true
Explanation: You can attain word2 from word1 in 2 operations.
Apply Operation 1: "abc" -> "acb"
Apply Operation 1: "acb" -> "bca"
Example 2:

Input: word1 = "a", word2 = "aa"
Output: false
Explanation: It is impossible to attain word2 from word1, or vice versa, in any number of operations.
Example 3:

Input: word1 = "cabbba", word2 = "abbccc"
Output: true
Explanation: You can attain word2 from word1 in 3 operations.
Apply Operation 1: "cabbba" -> "caabbb"
Apply Operation 2: "caabbb" -> "baaccc"
Apply Operation 2: "baaccc" -> "abbccc"
 

Constraints:

1 <= word1.length, word2.length <= 105
word1 and word2 contain only lowercase English letters.


//solution//

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()){
            return false;
        }
        sort(word1.begin(), word1.end());
        sort(word2.begin(), word2.end());
        
        vector<char> a{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        vector<int> count1{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        vector<int> count2{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int j=0;
        for(int i=0;i<word1.size();){
            while(word1[i]==a[j] && i<word1.size() && j<26){
                count1[j] = count1[j]+1;
                i++;
            }
            cout<<endl;
            j++;
        }
        int k=0;
        for(int i=0;i<word2.size();){
            while(word2[i]==a[k] && i<word2.size() && k<26){
                count2[k] = count2[k]+1;
                i++;
            }
            k++;
        }
    sort(count1.begin(), count1.end());
    sort(count2.begin(), count2.end());
    
    for(int i=0;i<26;i++){
        if(count1[i]!=count2[i]){
            return false;
        }
    }
    int q=0;
    for(int i=0;i<word1.size();i++){
        bool flag = false;
        while(q<word2.size()){
            if(word1[i]==word2[q]){
                flag = true;
            break;
            }
            q++;
        }
        if(flag==false){
            return false;
        }
    }
    return true;
    }
};