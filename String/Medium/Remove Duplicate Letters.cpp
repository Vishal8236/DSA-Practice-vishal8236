class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, bool> visited;
        unordered_map<char, int> count;
        
        for(auto ch : s) count[ch]++;
        string res = "";
        
        for(auto ch : s)
        {
            count[ch]--;
            if(visited[ch]) continue;
            while(!res.empty() and ch < res.back() and count[res.back()] > 0)
            {
                visited[res.back()] = false;
                res.pop_back();
                
            }
            res += ch;
            visited[ch] = true;
        }
        return res;
    }
};



problem link - https://leetcode.com/problems/remove-duplicate-letters/