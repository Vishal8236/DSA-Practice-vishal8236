vector<string> findMatchedWords(vector<string> dict,string pattern)
{
       //Your code here
       vector<string> res;
       map<char, int> mp;
       bool out = false;
       
       for(char ch : pattern)
       {
           mp[ch]++;
       }
       
       for(string st : dict)
       {
            map<char, int> tmp;
            for(char ch : st)
            {
               tmp[ch]++;
            }
            
            if(mp.size() == tmp.size())
            {
                for(int i=0; i<st.length(); i++)
                {
                    if(mp[pattern[i]] == tmp[st[i]])
                    {
                        out = true;
                    }
                    else{
                        out = false;
                        break;
                    }
                }
                if(out == true)
                {
                    res.push_back(st);
                }
            }
       } 
       return res;
}




problem link - https://practice.geeksforgeeks.org/problems/match-specific-pattern/1


Expected Time Complexity: O(N*K) (where K is the length of the pattern).
Expected Auxiliary Space: O(N)


Example 1:

Input:
N = 4
dict[] = {abb,abc,xyz,xyy}
pattern  = foo
Output: abb xyy
Explanation: xyy and abb have the same
character at index 1 and 2 like the
pattern.