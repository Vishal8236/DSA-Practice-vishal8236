class Solution {
public:
    int balancedStringSplit(string s) {
        int res = 0;
        int l=0, r=0;
        for(auto ch : s)
        {
            if(l == r and (l!=0 and r!=0))
            {
                res++;
                l=0;
                r=0;
            }
            
            if(ch == 'L')
            {
                l++;
            }
            else if(ch == 'R')
            {
                r++;
            }
        }
        if(l==r) res++;
        return res;
    }
};




Other Solution

int balancedStringSplit(string s) {
    int res = 0, cnt = 0;
    for (const auto& c : s) {
        cnt += c == 'L' ? 1 : -1;
        if (cnt == 0) ++res;
    }
    return res;        
}



problem link - https://leetcode.com/problems/split-a-string-in-balanced-strings/