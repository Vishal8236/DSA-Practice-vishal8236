class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        vector<string> str;
        
        string tmp = "";
        for(char ch : S)
        {
            if(ch == '.')
            {
                str.push_back(tmp);
                tmp = "";
                continue;
            }
            tmp += ch;
        }
        str.push_back(tmp);
        
        reverse(str.begin(), str.end());

        string res = "";
        for(int i=0; i<str.size(); i++)
        {
            if(i == str.size()-1)
            {
                res += str[i];
                continue;
            }
            res += str[i]+".";
        }
        return res;
    } 
};






Approach 2 -
string reverseWords(string S) {
    int i = 0, j = 0, k;
    reverse(S.begin(), S.end());
        
    for(int i = 0; S[i]; i++){
        if(S[i] == '.'){
            k = i - 1;
            reverse(S.begin() + j, S.begin() + k + 1);
            j = i + 1;
        }
    }
    reverse(S.begin() + j, S.end());
    return S;
}




Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i

problem link - https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1