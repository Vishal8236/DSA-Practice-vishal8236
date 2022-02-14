class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int res = 0;
	    int count = 0;
	    int index = -1;
	    
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<m; j++)
	        {
	            if(arr[i][j] == 1)
	            {
	                count++;
	            }
	        }
	        if(count > res)
	        {
	            res = count;
	            index = i;
	        }
	        count = 0;
	    }
	    return index;
	}

};



problem link - https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1/


Expected Time Complexity: O(N+M)
Expected Auxiliary Space: O(1)


Example 1:

Input: 
N = 4 , M = 4
Arr[][] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}}
Output: 2
Explanation: Row 2 contains 4 1's (0-based
indexing).

Example 2:

Input: 
N = 2, M = 2
Arr[][] = {{0, 0}, {1, 1}}
Output: 1
Explanation: Row 1 contains 2 1's (0-based
indexing).