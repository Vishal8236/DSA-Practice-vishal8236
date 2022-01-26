class Solution {
  public:
    bool possible(int a[], int n, int cap, int d)
    {
        int days = 1;
        int W = cap;
        
        for(int i=0; i< n ; i++){
            if(W < a[i]){
                days++;
                W = cap;
            }
            
            W -= a[i];
        }
        
        return days <= d;
    }
    int leastWeightCapacity(int arr[], int N, int D) {
        // code here
        int maxi = arr[0];
        int sum = 0;
        
        for(int i=0; i<N; i++)
        {
            sum += arr[i];
            maxi = max(arr[i], maxi);
        }
        
        int low = maxi;
        int high = sum, result = sum;
        
        while(low <= high)
        {
            int mid = (low+high)/2;
            
            if(possible(arr, N, mid, D))
            {
                result = mid;
                high = mid-1;
            }
            else{
                low = mid+1;    
            }
        }
        return result;
    }
};


problem link - https://practice.geeksforgeeks.org/problems/capacity-to-ship-packages-within-d-days/1?utm_source=gfgpractice&utm_medium=banner&utm_campaign=Practice_Explore_POD_Top_Banner#



Example 1:

Input:
N = 3
arr[] = {1, 2, 1}
D = 2
Output:
3
Explanation:
We can ship the weights in 2 days
in the following way:-
Day 1- 1,2
Day 2- 1


Example 2:
Input:
N = 3
arr[] = {9, 8, 10}
D = 3
Output:
10
Explanation:
We can ship the weights in 3 days
in the following way:-
Day 1- 9
Day 2- 8
Day 3- 10

Example 3:
Input:
N = 5
arr[] = {1, 2,3,4,5}
D = 3
Output:
6


