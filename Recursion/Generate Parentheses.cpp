class Solution
{
    public:
    void getPar(string op, int open, int close, vector<string>& res)
    {
        if(open == 0 and close == 0)
        {
            res.push_back(op);
            return;
        }
        
        if(open != 0)
        {
            string op1 = op;
            op1.push_back('(');
            getPar(op1, open-1, close, res);
        }
        if(close > open)
        {
            string op2 = op;
            op2.push_back(')');
            getPar(op2, open, close-1, res);
        }
        return;
    }
    
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> res;
        int open = n;
        int close = n;
        
        string op = "";
        getPar(op, open, close, res);
        return res;
    }
};


problem link - https://practice.geeksforgeeks.org/problems/generate-all-possible-parentheses/1

Example 1:

Input:
N = 3
Output:
((()))
(()())
(())()
()(())
()()()

Example 2:
Input:
N = 1
Output:
()