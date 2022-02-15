
class Solution {
public:
    void rotate(vector<vector<int> >& matrix) {
        // Code here
        reverse(matrix.begin(),matrix.end());
        for(int i=0; i<matrix.size(); i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};


problem link - https://practice.geeksforgeeks.org/problems/c-matrix-rotation-by-180-degree0745/1