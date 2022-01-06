
class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        
        for(int i=0; i<N; i++)
        {
            if(A[i] != B[i])
            {
                return false;
            }
        }
        return true;
    }
};



Example 1

Input:
N = 5
A[] = {1,2,5,4,0}
B[] = {2,4,5,0,1}
Output: 1
Explanation: Both the array can be rearranged to {0,1,2,4,5}


Example 2:

Input:
N = 3
A[] = {1,2,5}
B[] = {2,4,15}
Output: 0
Explanation: A[] and B[] have only one common value.


problem link - https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1