class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int> tmp;
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                tmp.push_back(Mat[i][j]);
            }
        }
        int k = 0;
        sort(tmp.begin(), tmp.end());
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                Mat[i][j] = tmp[k];
                k++;
            }
        }
        return Mat;
    }
};


problem link - https://practice.geeksforgeeks.org/problems/sorted-matrix2333/1