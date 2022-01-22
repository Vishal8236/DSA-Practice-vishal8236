
class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        // code here
        bool t[N+1][sum+1];
        
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<sum; j++)
            {
                if(i==0)
                {
                    t[i][j] = false;
                }
                if(j==0)
                {
                    t[i][j] = true;
                }
            }
        }
        
        for(int i=1; i<N+1; i++)
        {
            for(int j=1; j<sum+1; j++)
            {
                if(arr[i-1] <= sum)
                {
                    t[i][j] = (t[i-1][j-arr[i-1]]) || (t[i-1][j]);
                }
                else
                {
                    t[i][j] = t[i-1][j];
                }
            }
        }
        return t[N][sum];
    }
};


Example 1:

Input:
N = 6
arr[] = {3, 34, 4, 12, 5, 2}
sum = 9
Output: 1 
Explanation: Here there exists a subset with
sum = 9, 4+3+2 = 9.

problem link - https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1/#