class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        vector<int> res;
        
        bool lr = true;
        
        for(int i=0; i<matrix.size(); i++)
        {
            if(lr)
            {
                //traverse from left to right
                lr = false;
                for(auto nu : matrix[i])
                {
                    res.push_back(nu);
                }
            }
            else{
                //traverse from right to left
                lr = true;
                for(int j=matrix.size()-1; j>=0; j--)
                {
                    res.push_back(matrix[i][j]);
                }
            }
        }
        return res;
    }
};




problem link - https://practice.geeksforgeeks.org/problems/print-matrix-in-snake-pattern-1587115621/1

