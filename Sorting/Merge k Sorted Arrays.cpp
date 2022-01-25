
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here4
        priority_queue<int> max;
        int len = 0;
        
        for(int i=0; i<K; i++)
        {
            for(int j=0; j<K; j++)
            {
                max.push(arr[i][j]);
                len += 1;
            }
        }
        
        
        // cout<<max.top()<<endl;

        vector<int> res(len);
        
        while(!max.empty())
        {
            int t = max.top();
            res[--len] = t;
            
            max.pop();
        }
        return res;
    }
};


problem linnk - https://practice.geeksforgeeks.org/problems/merge-k-sorted-arrays/1


Input:
K = 3
arr[][] = {{1,2,3},{4,5,6},{7,8,9}}
Output: 1 2 3 4 5 6 7 8 9
Explanation:Above test case has 3 sorted
arrays of size 3, 3, 3
arr[][] = [[1, 2, 3],[4, 5, 6], 
[7, 8, 9]]
The merged list will be 
[1, 2, 3, 4, 5, 6, 7, 8, 9].
Example 2:

Input:
K = 4
arr[][]={{1,2,3,4}{2,2,3,4},
         {5,5,6,6},{7,8,9,9}}
Output:
1 2 2 2 3 3 4 4 5 5 6 6 7 8 9 9 
Explanation: Above test case has 4 sorted
arrays of size 4, 4, 4, 4
arr[][] = [[1, 2, 2, 2], [3, 3, 4, 4],
[5, 5, 6, 6]  [7, 8, 9, 9 ]]
The merged list will be 
[1, 2, 2, 2, 3, 3, 4, 4, 5, 5, 
6, 6, 7, 8, 9, 9 ].


