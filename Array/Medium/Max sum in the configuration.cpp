int max_sum(int A[],int N)
{
//Your code here
    int res;
    
    int sum=0, prod=0;
    for(int i=0; i<N; i++)
    {
        sum += A[i];
        prod += (A[i]*i);
    }
    
    res = prod;
    for(int i=1; i<N; i++)
    {
        prod = (prod + A[i-1]*N) - sum;
        res = max(prod, res);
    }
    return res;
}



Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

problem link - https://practice.geeksforgeeks.org/problems/max-sum-in-the-configuration/1

Example 1:

Input:
N = 4
A[] = {8,3,1,2}
Output: 29
Explanation: Above the configuration
possible by rotating elements are
3 1 2 8 here sum is 3*0+1*1+2*2+8*3 = 29
1 2 8 3 here sum is 1*0+2*1+8*2+3*3 = 27
2 8 3 1 here sum is 2*0+8*1+3*2+1*3 = 17
8 3 1 2 here sum is 8*0+3*1+1*2+2*3 = 11
Here the max sum is 29 