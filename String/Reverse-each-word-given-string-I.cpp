class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        string res = "";
        string tmp = "";
        
        for(char ch : s)
        {
            if(ch == '.')
            {
                reverse(tmp.begin(), tmp.end());
                res += tmp+".";
                tmp = "";
                continue;
            }
            tmp += ch;
        }
        reverse(tmp.begin(), tmp.end());
        res += tmp;
        return res;
    }
};

Input:
S = "i.like.this.program.very.much"
Output: 
i.ekil.siht.margorp.yrev.hcum
Explanation: 
The words are reversed as
follows:"i" -> "i","like"->"ekil",
"this"->"siht","program" -> "margorp",
"very" -> "yrev","much" -> "hcum".

problem link - https://practice.geeksforgeeks.org/problems/reverse-each-word-in-a-given-string1001/1