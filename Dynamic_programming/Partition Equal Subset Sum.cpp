class Solution {
public:
    bool canPartition(vector<int>& nums) {
        sum = accumulate(nums.begin(), nums.end(), sum);
       
        return (sum%2==0) && solve(nums, sum/2);
    }
private:
    int sum = 0;
    
    bool solve(vector<int> &nums, int sum){
        int n = nums.size();
        bool dp[n+1][sum + 1];
        
        for(int i=0;i<=n;i++) dp[i][0] = true; //subset with 0 sum
        
        for(int j=1;j<=sum;j++) dp[0][j] = false; //non-zero sum with 0 elements
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<=sum;j++){
                if(nums[i-1] > j) dp[i][j] = dp[i-1][j]; //don't include ith element if it's greater then the rem sum
                else dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
               
            }
        }
        
        return dp[n][sum];
        
        
    }
};


problem link - https://leetcode.com/problems/partition-equal-subset-sum/

Example 1:

Input: nums = [1,5,11,5]
Output: true
Explanation: The array can be partitioned as [1, 5, 5] and [11].
Example 2:

Input: nums = [1,2,3,5]
Output: false
Explanation: The array cannot be partitioned into equal sum subsets.