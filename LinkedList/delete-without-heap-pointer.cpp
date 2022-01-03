class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       del->data = del->next->data;
       del->next = del->next->next;
    }

};


Example 1- 
Input:
N = 2
value[] = {1,2}
node = 1
Output: 2
Explanation: After deleting 1 from the linked list, we have remaining nodes as 2.

Note: No head reference is given to you. It is guaranteed that the node to be deleted is not a tail node in the linked list.

problem link - https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1/?company[]=Goldman%20Sachs&company[]=Goldman%20Sachs&problemStatus=unsolved&page=1&query=company[]Goldman%20SachsproblemStatusunsolvedpage1company[]Goldman%20Sachs#
