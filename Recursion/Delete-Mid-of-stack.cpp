class Solution
{
    public:
    void delMid(stack<int>&s, int mid)
    {
        if(mid == 1)
        {
            s.pop();
            return;
        }
        int tmp = s.top();
        s.pop();
        
        delMid(s, mid-1);
        
        s.push(tmp);
    }
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        if(s.size() == 0)
        {
            return;
        }
        int mid = (sizeOfStack/2)+1;
        delMid(s, mid);
    }
};


problem link - https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1/