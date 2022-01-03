class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(vector<int>& arr, int n){
        
        // Your code here
        for(int i=0; i<n-1; i++)
        {
            swap(arr[i], arr[i+1]);
            i++;
        }
    }
};


Example :- 
n = 5
arr[] = {1,2,3,4,5}
Output: 2 1 4 3 5
Explanation: Array elements after 
sorting it in wave form are 
2 1 4 3 5.

problem-link - https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1/?company[]=Goldman%20Sachs&company[]=Goldman%20Sachs&problemStatus=unsolved&page=1&query=company[]Goldman%20SachsproblemStatusunsolvedpage1company[]Goldman%20Sachs
