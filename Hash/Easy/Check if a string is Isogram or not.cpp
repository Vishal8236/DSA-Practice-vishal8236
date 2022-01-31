
class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
        unordered_map<char, int> mp;
        
        for(char ch : s)
        {
            mp[ch]++;
        }
        
        for(auto ch : mp)
        {
            if(ch.second > 1) 
            {
                return false;
            }
      
        }
        return true;
    }
};



problem link - https://practice.geeksforgeeks.org/problems/check-if-a-string-is-isogram-or-not-1587115620/1