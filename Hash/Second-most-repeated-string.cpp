#define ppi pair<int, string>
class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string, int>map;
        
        for(int i=0; i<n; i++)
        {
            map[arr[i]]++;
        }
        
        priority_queue<ppi, vector<ppi>, greater<ppi>> minh;
        for(auto mp : map)
        {
            minh.push(make_pair(mp.second, mp.first));
            if(minh.size() > 2)
            {
                minh.pop();
            }
        }
        return minh.top().second;
    }
};



Example 
Input: 
N = 6
arr[] = {geek, for, geek, for, geek, aaa}
Output: for
Explanation: "for" is the second most occurring string with frequency 2.



problem link - https://practice.geeksforgeeks.org/problems/second-most-repeated-string-in-a-sequence0534/1