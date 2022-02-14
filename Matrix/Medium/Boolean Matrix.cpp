class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int n = matrix.size();
        int m = matrix[0].size();
        vector<pair<int, int>> tmp;
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(matrix[i][j] == 1)
                {
                    tmp.push_back(make_pair(i, j));
                }
            }
        }
        
        for(int i=0; i<tmp.size(); i++)
        {
            //for i
            int f = tmp[i].first;
            int s = tmp[i].second;
            for(int j=0; j<m; j++)
            {
                matrix[f][j] = 1;
            }
            
            for(int j=0; j<n; j++)
            {
                matrix[j][s] = 1;
            }
        }
    }
};



problem link - https://practice.geeksforgeeks.org/problems/boolean-matrix-problem-1587115620/1


Example 1:

Input:
R = 2, C = 2
matrix[][] = {{1, 0},
              {0, 0}}
Output: 
1 1
1 0 
Explanation:
Only cell that has 1 is at (0,0) so all 
cells in row 0 are modified to 1 and all 
cells in column 0 are modified to 1.

Example 2:

Input:
R = 4, C = 3
matrix[][] = {{ 1, 0, 0},
              { 1, 0, 0},
              { 1, 0, 0},
              { 0, 0, 0}}
Output: 
1 1 1
1 1 1
1 1 1
1 0 0 
Explanation:
The position of cells that have 1 in
the original matrix are (0,0), (1,0)
and (2,0). Therefore, all cells in row
0,1,2 are and column 0 are modified to 1.