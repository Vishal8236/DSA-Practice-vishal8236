class Solution{

// 	class Solution{
public:
 int perfectSum(int arr[],int n, int sum) 
    {
        long long dp[n+1][sum+1];
        long long mod=1e9+7;
        int zero=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            zero++;
        }
        for(int i=0;i<=n;i++)
        dp[i][0]=1;
        for(int i=1;i<=sum;i++)
        dp[0][i]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(arr[i-1]<=j && arr[i-1]!=0)
                {
                    dp[i][j]=((dp[i-1][j]%mod)+(dp[i-1][j-arr[i-1]]%mod))%mod;
                }
                else
                dp[i][j]=dp[i-1][j]%mod;
            }
        }
        return pow(2,zero)*dp[n][sum]; 
	}

};


problme link - https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1#