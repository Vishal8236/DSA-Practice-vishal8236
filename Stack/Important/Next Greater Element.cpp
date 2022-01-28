class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        
        stack<long long> st;
        vector<long long> res;
        
        for(int i=n-1; i>=0; i--)
        {
            if(st.size() == 0) 
            { 
                res.push_back(-1); 
            }
            else if(st.size() > 0 and st.top() >= arr[i])
            {
                res.push_back(st.top());
            }
            else if(st.size() > 0 and st.top() <= arr[i])
            {
                 while(!st.empty() and st.top() <= arr[i])
                 {
                     st.pop();
                 }
                 if(st.size() == 0) res.push_back(-1);
                 else res.push_back(st.top());
            }
            st.push(arr[i]);
        }
        reverse(res.begin(), res.end());
        
        return res;
    }
};




problem link - https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1/

Example 1:

Input: 
N = 4, arr[] = [1 3 2 4]
Output:
3 4 4 -1
Explanation:
In the array, the next larger element 
to 1 is 3 , 3 is 4 , 2 is 4 and for 4 ? 
since it doesn't exist, it is -1.

Example 2:

Input: 
N = 5, arr[] [6 8 0 1 3]
Output:
8 -1 1 3 -1
Explanation:
In the array, the next larger element to 
6 is 8, for 8 there is no larger elements 
hence it is -1, for 0 it is 1 , for 1 it 
is 3 and then for 3 there is no larger 
element on right and hence -1.