class Solution{   
public:
    int countZeroes(int arr[], int n) {
   // code here
       int l=0,h=n-1,mid;
       while(l<=h)
       {
           mid=(l+h)/2;
           if(arr[mid]==1)
           {
               if(arr[mid+1]==1)
                   l=mid+1;
               else
                   return n-1-mid;
           }
           else if(arr[mid]==0)
           {
               h=mid-1;
           }
       }
       return n-mid;
    }
};


problem link - https://practice.geeksforgeeks.org/problems/count-the-zeros2550/1

Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1)

Example 1:

Input:
N = 12
Arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0}
Output: 3
Explanation: There are 3 0's in the given array.

Example 2:

Input:
N = 5
Arr[] = {0, 0, 0, 0, 0}
Output: 5
Explanation: There are 5 0's in the array.