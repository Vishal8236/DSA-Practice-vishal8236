class Solution {
  public:
    int maxStairHeight(int N) {
        // Code here
        int k = 1;
        int p = 0;
        while(N > p)
        {
            N -= k;
            p = k;
            k++;
        }
        return p;
    }
};


problem link - https://practice.geeksforgeeks.org/problems/maximum-height-of-the-staircase5755/1