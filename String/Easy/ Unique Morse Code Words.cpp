class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       vector<string> s = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
               
        set<string> st;
        for(auto it : words)
        {
            string tmp = "";
            for(auto ch : it)
            {
                tmp += s[ch - 'a'];
            }
            st.insert(tmp);
        }
        return st.size();
    }
};



problem link - https://leetcode.com/problems/unique-morse-code-words/



Example 1:

Input: words = ["gin","zen","gig","msg"]
Output: 2
Explanation: The transformation of each word is:
"gin" -> "--...-."
"zen" -> "--...-."
"gig" -> "--...--."
"msg" -> "--...--."
There are 2 different transformations: "--...-." and "--...--.".
Example 2:

Input: words = ["a"]
Output: 1