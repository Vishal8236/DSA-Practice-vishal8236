int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  priority_queue<int> max_h;
  
  for(int i=0; i<n; i++)
  {
      for(int j=0; j<n; j++)
      {
          max_h.push(mat[i][j]);
          if(max_h.size() > k)
          {
              max_h.pop();
          }
      }
  }
  return max_h.top();
}


problem link - https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1/


Example 1:
Input:
N = 4
mat[][] =     {{16, 28, 60, 64},
                   {22, 41, 63, 91},
                   {27, 50, 87, 93},
                   {36, 78, 87, 94 }}
K = 3
Output: 27
Explanation: 27 is the 3rd smallest element.
 

Example 2:
Input:
N = 4
mat[][] =     {{10, 20, 30, 40}
                   {15, 25, 35, 45}
                   {24, 29, 37, 48}
                   {32, 33, 39, 50}}
K = 7
Output: 30
Explanation: 30 is the 7th smallest element.