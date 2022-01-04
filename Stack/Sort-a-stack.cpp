void SortedStack :: sort()
{
   //Your code here
   int tope = 0;
   priority_queue<int, vector<int>, greater<int>> minh;
   while(s.size() > 0)
   {
       tope = s.top();
       s.pop();
       minh.push(tope);
   }
    while(minh.size() > 0)
    {
        s.push(minh.top());
        minh.pop();
    }
}



Example 1:

Input:
Stack: 3 2 1
Output: 3 2 1

Example 2:

Input:
Stack: 11 2 32 3 41
Output: 41 32 11 3 2

problem link - https://practice.geeksforgeeks.org/problems/sort-a-stack/1