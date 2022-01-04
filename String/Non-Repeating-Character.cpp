Solution 1 - 
class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       vector<int> tmp(26, 0);
       for(char st : S)
       {
           tmp[st - 'a']++;
       }
       
       for(char st : S)
       {
           if(tmp[st - 'a'] == 1)
           {
               return st;
           }
       }
       return '$';
    }
};



Solution 2 -

static char nonrepeatingCharacter(String S)
{
    for(int i=0;i<S.length();i++){
        if(S.indexOf(S.charAt(i)) == S.lastIndexOf(S.charAt(i)))
            return S.charAt(i);
    }
    return '$';
}


Solution 3 - using map
class Solution
{
    public:
    char nonrepeatingCharacter(string S)
    {
        char ans;
        map <char,int> mp;
        
        for(int i=0; i<S.size(); i++)
        mp[S[i]]++;
        
        for(int i=0; i<S.size(); i++)
        {
            if(mp[S[i]] == 1)
           return S[i];
        }
        return '$';
    }

};



problem link - https://practice.geeksforgeeks.org/problems/non-repeating-character-1587115620/1