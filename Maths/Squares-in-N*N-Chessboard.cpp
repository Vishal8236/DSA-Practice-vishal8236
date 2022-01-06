class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here 
        return N*(N+1)*(2*N+1)/6;
    }
};




Example 
Input: N = 2
Output: 5
Explanation:
A 2*2 chessboard has 5 squares.
4 1*1 squares and a 2*2 square.


problem link - https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1
