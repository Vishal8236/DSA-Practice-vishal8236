
class Solution{
  public:
    vector <int> countDistinct (int arr[], int n, int k)
    {
        //code here.
        unordered_map<int, int> mp;
        vector<int> res;
        
        for(int i=0; i<k; i++)
        {
            mp[arr[i]]++;
        }
        res.push_back(mp.size());
        
        
        for(int i=0; i<n-k; i++)
        {
            if(mp[arr[i]] > 1) mp[arr[i]]--;
            else mp.erase(arr[i]);
            
            mp[arr[i+k]]++;
            
            res.push_back(mp.size());
        }
        return res;
    }
};




problem link - https://practice.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1/#


Example 1:

Input:
N = 7, K = 4
A[] = {1,2,1,3,4,2,3}
Output: 3 4 4 3
Explanation: Window 1 of size k = 4 is
1 2 1 3. Number of distinct elements in
this window are 3. 
Window 2 of size k = 4 is 2 1 3 4. Number
of distinct elements in this window are 4.
Window 3 of size k = 4 is 1 3 4 2. Number
of distinct elements in this window are 4.
Window 4 of size k = 4 is 3 4 2 3. Number
of distinct elements in this window are 3.
Example 2:

Input:
N = 3, K = 2
A[] = {4,1,1}
Output: 2 1