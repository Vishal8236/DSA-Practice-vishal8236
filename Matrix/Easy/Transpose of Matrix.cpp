class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here 
        for(int i=0; i<n; i++)
        {
            int k=i;
            for(int j=i; j<n; j++)
            {
                swap(matrix[i][j], matrix[k][i]);
                k++;
            }
        }
    }
};


Aproach 2 -


int r=matrix.size();
//transpose
for(int i=0;i<r;i++){
    for(int j=0;j<i;j++){
        swap(matrix[i][j],matrix[j][i]);
    }
}  



problem link - https://practice.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1