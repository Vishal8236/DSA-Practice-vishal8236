
/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */

//Function to push an element in queue by using 2 stacks.
void StackQueue :: push(int x)
{
    // Your Code
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
    // Your Code  
    if(s1.size() == 0)
    {
        return -1;
    }
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    int last = s2.top();
    s2.pop();
    
    while(!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
    return last;
}




Input:
5
1 2 1 3 2 1 4 2

Output: 
2 3

Explanation: 
In the first testcase
1 2 the queue will be {2}
1 3 the queue will be {2 3}
2   poped element will be 2 the queue 
    will be {3}
1 4 the queue will be {3 4}
2   poped element will be 3.


problem link - https://practice.geeksforgeeks.org/problems/queue-using-two-stacks/1