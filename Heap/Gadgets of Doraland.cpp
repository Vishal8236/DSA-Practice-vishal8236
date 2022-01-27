class Solution{
    public:
    vector<int> TopK(vector<int>& array, int k)
    {
        // code here
        vector<int> res;
        map<int, int> mp;
        
        for(int i=0; i<array.size(); i++)
        {
            mp[array[i]]++;
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
        
        for(auto it : mp)
        {
            pq.push(make_pair(it.second, it.first));
            if(pq.size() > k)
            {
                pq.pop();
            }
        }
        
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

problem link - https://practice.geeksforgeeks.org/problems/bbd15e2da95880979ce65acc7360e2c5681664e65520/1

Example 1:

Input:
N = 6
array[] = {1, 1, 1, 2, 2, 3}
K = 2
Output: 
1 2
Explanation: 
Customers with D-id 1 and 2 are most frequent.

Example 2:

Input:
N = 8
array[] = {1, 1, 2, 2, 3, 3, 3, 4}
K = 2
Output: 
3 2
Explanation: People with D-id 1 and 2 have 
visited shop 2 times Therefore, in this case, the answer includes the D-id 2 as 2 > 1.