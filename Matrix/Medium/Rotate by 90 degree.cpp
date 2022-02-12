void rotate(vector<vector<int> >& matrix)
{
    int n = matrix.size();
    //First Transpose of Matrix
    for(int i=0; i<n; i++)
    {
        int k=i;
        for(int j=i; j<n; j++)
        {
            swap(matrix[i][j], matrix[k][i]);
            k++;
        }
    }
    
    //now reverse row
    reverse(matrix.begin(), matrix.end());
}


Example 1:

Input:
N = 3
matrix[][] = [[1 2 3],
              [4 5 6],
              [7 8 9]]
Output:
3 6 9 
2 5 8 
1 4 7


problem link - https://practice.geeksforgeeks.org/problems/rotate-by-90-degree0356/1