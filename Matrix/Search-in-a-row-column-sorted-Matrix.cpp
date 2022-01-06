class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        int i=0;
        int j=m-1;
        while(i < n and j != -1)
        {
            if(x == matrix[i][j])
            {
                return true;
            }
            else if(x < matrix[i][j])
            {
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};


Example 1:

Input:
n = 3, m = 3, x = 62
matrix[][] = {{ 3, 30, 38},
              {36, 43, 60},
              {40, 51, 69}}
Output: 0
Explanation:62 is not present in the matrix, so output is 0.

Example 2:

Input:
n = 1, m = 6, x = 55
matrix[][] = {{18, 21, 27, 38, 55, 67}}
Output: 1
Explanation: 55 is present in the matrix.




problem link - https://practice.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1