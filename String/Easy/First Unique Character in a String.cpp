class Solution {
public:
    int firstUniqChar(string s) {
        int tmp = -1;
        int mini = INT_MAX;
        
        unordered_map<char, int> mp;
        for(int i=0; i<s.length(); i++) mp[s[i]]++;
        
        for(auto it : mp)
        {
            if(it.second == 1)
            {
                int ind = s.find(it.first);
                if(ind < mini)
                    mini = ind;
                    tmp = mini;
            }
        }
        return tmp;
    }
};


problem link - https://leetcode.com/problems/first-unique-character-in-a-string/



Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

 

Example 1:

Input: s = "leetcode"
Output: 0
Example 2:

Input: s = "loveleetcode"
Output: 2
Example 3:

Input: s = "aabb"
Output: -1