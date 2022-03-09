class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) 
            return false;
        
        if(s == goal) 
            return true;
        
        int len = s.length();
        while(len--)
        {
            if(s == goal)
                return true;
            
            s = s.substr(1) + s[0]; //remove first character and then add first char to end of string
        }
        return false;
    }
};


problem link - https://leetcode.com/problems/rotate-string/


Example 1:

Input: s = "abcde", goal = "cdeab"
Output: true
Example 2:

Input: s = "abcde", goal = "abced"
Output: false