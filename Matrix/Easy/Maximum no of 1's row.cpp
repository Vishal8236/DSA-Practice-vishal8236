class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            // your code here
            int index = -1;
            
            //traverse from colum vise not row
            //when 1 is come then return row index (j) besause the row is sorted order
            for(int i=0; i<M; i++)
            {
                for(int j=0; j<N; j++)
                {
                    if(Mat[j][i] == 1)
                    {
                        index = j;
                        return index;
                    }
                }
            }
            return index;
        }
};


problem link - https://practice.geeksforgeeks.org/problems/maximum-no-of-1s-row3027/1

Example 1:

Input:
N = 3, M = 4
Mat[] = {{0 1 1 1},
         {0 0 1 1},
         {0 0 1 1}}
Output: 0
Explanation: Row 0 has 3 ones whereas
rows 1 and 2 have just 2 ones.

â€‹Example 2:

Input: 
N = 2, M = 2
Mat[] = {{0 1},
         {1 1}}
Output: 1
Explanation: Row 1 has 2 ones whereas
row 0 has just a single one. 