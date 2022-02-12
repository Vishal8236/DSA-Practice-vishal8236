class Solution {
  public:
    int sumOfMatrix(int N, int M, vector<vector<int>> Grid) {
        // code here
        int sum = 0;
        for(int i=0; i<Grid.size(); i++)
        {
            for(auto nu : Grid[i])
            {
                sum += (nu);
            }
        }
        return sum;
    }
};



problem link - https://practice.geeksforgeeks.org/problems/sum-of-elements-in-a-matrix2000/1