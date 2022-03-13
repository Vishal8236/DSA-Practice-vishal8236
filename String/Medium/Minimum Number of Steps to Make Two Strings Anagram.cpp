class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> mp;
        int res = 0;
        
        for(auto ch : s) mp[ch]++;
        
        for(auto ch : t)
        {
            if(mp.find(ch) != mp.end())
            {
                mp[ch]--;
            }
        }
        for(auto it : mp)
        {
           if(it.second > 0)
           {
               res += it.second;
           }
        }
        
        // cout<<mp.size();
        return res;
    }
};



problem link - https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/