class Solution {
public:
    string reverseOnlyLetters(string s) {
        string tmp = "";
        
        for(auto ch : s)
        {
            if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
                tmp.push_back(ch);
        }
        
        int k=0;
        for(int i=s.length()-1;  i>=0; i--)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            {
                s[i] = tmp[k];
                k++;
            }
        }
        return s;
    }
};


Approach 2 - Through sliding window

 string reverseOnlyLetters(string S) {
        for (int i = 0, j = S.length() - 1; i < j;) {
            if (!isalpha(S[i]))
                ++i;
            else if (!isalpha(S[j]))
                --j;
            else
                swap(S[i++], S[j--]);
        }
        return S;
    }


    

problem link - https://leetcode.com/problems/reverse-only-letters/