class Solution {
public:
    int isPrefixOfWord(string sentence, string_view searchWord) {
        stringstream ss(sentence);
        string word;
        int i=1;
        while(ss>>word){
            cout<<word<<"  ";
            if(word.find(searchWord) == 0 ) return i;
            i++;
        }
        return -1;
    }
};





problem link - https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/



Example 1:

Input: sentence = "i love eating burger", searchWord = "burg"
Output: 4
Explanation: "burg" is prefix of "burger" which is the 4th word in the sentence.
Example 2:

Input: sentence = "this problem is an easy problem", searchWord = "pro"
Output: 2
Explanation: "pro" is prefix of "problem" which is the 2nd and the 6th word in the sentence, but we return 2 as it's the minimal index.
Example 3:

Input: sentence = "i am tired", searchWord = "you"
Output: -1
Explanation: "you" is not a prefix of any word in the sentence.