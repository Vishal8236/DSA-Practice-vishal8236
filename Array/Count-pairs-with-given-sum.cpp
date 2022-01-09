class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int ,int> mp;
        
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            int s = k - arr[i];
            if(mp[s])
            {
                ans += mp[s];
            }
            mp[arr[i]]++;
        }
        return ans;
    }
};