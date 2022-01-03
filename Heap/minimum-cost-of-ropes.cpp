class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        long long res = 0;
        
        priority_queue<long long, vector<long long>, greater<long long>> minh;
        
        for(long long i=0; i<n; i++)
        {
            minh.push(arr[i]);
        }
        
        long long sum; 
        while(minh.size() > 1)
        {
            sum = 0;
            sum += minh.top();
            minh.pop();
            sum += minh.top();
            minh.pop();
            
            res += sum;
            minh.push(sum);
        }
        
        return res;
    }
};





Example :-

Input:
n = 4
arr[] = {4, 3, 2, 6}
Output: 
29
Explanation:
For example if we are given 4 ropes of lengths 4, 3, 2 and 6. We can connect the ropes in following ways.
1) First connect ropes of lengths 2 and 3.Now we have three ropes of lengths 4, 6 and 5.
2) Now connect ropes of lengths 4 and 5.Now we have two ropes of lengths 6 and 9.
3) Finally connect the two ropes and all ropes have connected.

Total cost for connecting all ropes is 5 + 9 + 15 = 29. This is the optimized cost
for connecting ropes. Other ways of connecting ropes would always have same
or more cost. For example, if we connect 4 and 6 first (we get three strings of 3, 2 and 10), then connect 10 and 3 (we get
two strings of 13 and 2). Finally we connect 13 and 2. Total cost in this way is 10 + 13 + 15 = 38.



problem link - https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1/?category[]=Heap&category[]=Heap&company[]=Goldman%20Sachs&company[]=Goldman%20Sachs&page=1&query=category[]Heapcompany[]Goldman%20Sachspage1company[]Goldman%20Sachscategory[]Heap#
