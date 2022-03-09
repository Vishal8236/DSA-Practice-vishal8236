class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) 
            return false;
        
        map<char, int> m1;
        
        for(int i=0; i<s.length(); i++)
        {
            m1[s[i]]++;
            m1[t[i]]--;
        }
        
        
        for(auto it : m1)
        {
            if(it.second) return false;
        }
        return true;
    }
};


problem link - https://leetcode.com/problems/valid-anagram/

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false