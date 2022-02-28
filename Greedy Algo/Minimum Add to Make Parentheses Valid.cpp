class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int count = 0;
        
        for(auto ch : s)
        {
            if(ch == '(')
            {
                st.push(ch);
            }
            else if(ch == ')')
            {
                if(!st.empty() and st.top() == '(')
                {
                    st.pop();                   
                }
                else{
                    count++;
                }
            }
        }
        if(st.size() != 0) return st.size()+count;
        return count;
    }
};





Approach 2 - 

class Solution {
public:
    int minAddToMakeValid(string S) {
        int res = 0, n = S.size(), balance = 0;
        for (int i = 0; i < n; i++) {
            balance += S[i] == '(' ? 1 : -1;
            if (balance == -1) {
                res++;
                balance++;
            }
        }
        return res + balance;
    }
};



problem link - https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/



Example 1:

Input: s = "())"
Output: 1
Example 2:

Input: s = "((("
Output: 3