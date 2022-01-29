vector<int> Smallestonleft(int arr[], int n)
{
    // Complete the function
    vector<int> res;
    set<int> s;
    
    // s.push(arr[0]);
    
    for(int i=0; i<n; i++)
    {
        if(s.empty())
        {
            res.push_back(-1);
        }
        else{
            auto it = s.lower_bound(arr[i]);
            if(it == s.begin())
            {
                res.push_back(-1);
            }
            else{
                it--;
                res.push_back(*it);
            }
        }
        s.insert(arr[i]);
    }
    return res;
}


problem link - https://practice.geeksforgeeks.org/problems/smaller-on-left20360700/1#

Example 1:

â€‹Input:
N = 5
arr[] = {2, 3, 4, 5, 1}
Output: 
-1 2 3 4 -1
Explanation:
Greatest element on the left of 3 smaller 
than itself is 2, for 4 it is 3 and for 5 
it is 1. Since 2 is the first element and 
no element on its left is present, so it's 
greatest smaller element will be -1 and for 
1 no element smaller than itself is present 
on its left, so it's greatest smaller element 
is -1.
â€‹Example 2:

Input:
N = 3
arr[] = {1, 2, 3} 
Output:
-1 1 2 