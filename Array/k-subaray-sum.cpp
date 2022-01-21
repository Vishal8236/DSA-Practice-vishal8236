#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
    {
        int n, k, m;
        cin>>n>>k>>m;
        
        vector<int> arr(n);
        
        priority_queue<int> q;
        //get array value
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];    
        }
        
        int tmp;
        int sum = 0;
        for(int i=0; i<=n-k; i++)
        {
            tmp = k;
            int j = i;
            while(tmp--)
            {
                sum += arr[j];
                j++;
            }
            q.push(sum);
            sum = 0;
        }
        int c = 1;
        while(!q.empty())
        {
            if(c <= m)
            {
                cout<<q.top()<<" ";
                q.pop();
                c++;
                continue;
            }
            q.pop();
        }
        cout<<endl;
    }
    
	return 0;
}



problem link - https://practice.geeksforgeeks.org/problems/k-subarray-sum/0/

Example:
Input:
2
5 2 3
10 11 10 11 12
5 5 1
1 2 3 4 5
 

Output:
23 21 21
15

Explanation:
Test Case 1: 2 sized subarray sum are {21, 21, 21, 21, 23}, We need to print 3 largest sums from maximum to minimum