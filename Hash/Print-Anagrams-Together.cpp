class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
         vector<vector<string>> ans;
          unordered_map <string, vector<string>> mp;
                
          for(auto str : string_list) {
            string word = str;
            sort(word.begin(), word.end());
            mp[word].push_back(str);
          }

          for(auto it : mp) {
            ans.push_back(it.second);
          }    
          return ans;
    }
};


Example -
N = 5
words[] = {act,god,cat,dog,tac}
Output: 
god dog
act cat tac
Explanation:
There are 2 groups of anagrams "god", "dog" make group 1.
"act", "cat", "tac" make group 2.


problem link - https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/?company[]=Goldman%20Sachs&company[]=Goldman%20Sachs&page=1&query=company[]Goldman%20Sachspage1company[]Goldman%20Sachs