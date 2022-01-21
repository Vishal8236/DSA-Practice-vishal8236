
class Solution
{
    public:
    long long solve(int n, long long a[], long long b)
    {
        //code here.
        
        for(int i=0; i<n; i++)
        {
            if(a[i] == b)
            {
                b += a[i];
            }
        }
        return b;
    }  
};

problem link - https://practice.geeksforgeeks.org/problems/doubling-the-value4859/1