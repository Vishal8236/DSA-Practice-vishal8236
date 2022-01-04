class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        // code here
        int low = 0;
        int cu = 0;
        int end = n-1;
        while(cu < end)
        {
            if(arr[cu] == 0)
            {
                swap(arr[cu], arr[low]);
                cu++;
                low++;
            }
            else{
                swap(arr[cu], arr[end]);
                end--;
            }
        }
        
    }
};


Example 

N = 5
arr[] = {0, 0, 1, 1, 0}
Output: 0 0 0 1 1

problem link - https://practice.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1/?company[]=Goldman%20Sachs&company[]=Goldman%20Sachs&problemStatus=unsolved&page=1&query=company[]Goldman%20SachsproblemStatusunsolvedpage1company[]Goldman%20Sachs#