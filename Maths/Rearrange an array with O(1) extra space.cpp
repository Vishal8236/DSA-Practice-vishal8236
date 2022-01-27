class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void fun(long long arr[], int n, int k)
    {
        if(k >= n)
        {
            return;
        }
        int i = arr[arr[k]];
        fun(arr, n, k+1);
        
        arr[k] = i;
    }
    void arrange(long long arr[], int n) {
        // Your code here
        fun(arr, n, 0);
    }
};



problem link - https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1

Example 1:

Input:
N = 2
arr[] = {1,0}
Output: 0 1
Explanation: 
arr[arr[0]] = arr[1] = 0.
arr[arr[1]] = arr[0] = 1.
 

Example 2:

Input:
N = 5
arr[] = {4,0,2,1,3}
Output: 3 4 2 0 1
Explanation: 
arr[arr[0]] = arr[4] = 3.
arr[arr[1]] = arr[0] = 4.
arr[arr[2]] = arr[2] = 2.
arr[arr[3]] = arr[1] = 0.
arr[arr[4]] = arr[3] = 1.


