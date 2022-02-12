
class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        vector<int> res;
        
        int kk=0;
        int sum1 = 0;
        
        int k=1;
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<k; j++)
            {
                sum += matrix[i][j];
            }
            k++;
            
            for(int j=n-1; j>=kk; j--)
            {
                sum1 += matrix[i][j];
            }
            kk++;
        }
        res.push_back(sum1);
        res.push_back(sum);

        return res;
    }
};


problem link - https://practice.geeksforgeeks.org/problems/sum-of-upper-and-lower-triangles-1587115621/1