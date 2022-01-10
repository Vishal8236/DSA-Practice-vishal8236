class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        map<int, int>mp;
        for(int x : nums)
        {
            mp[x%k]++;
        }
        if(mp[0]%2 == 1) return false;
        for(int i=1; i<k; i++)
        {
            if(mp[i] != mp[k-i]) return false;
        }
        return true;
    }
};



problem link - https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1