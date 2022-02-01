Node* mergeList(Node* a , Node* b)
{
    Node* tmp = new Node(0);
    Node* res = tmp;
    
    while(a != NULL and b != NULL)
    {
        if(a->data < b->data)
        {
            tmp->bottom = a;
            tmp = tmp->bottom;
            a = a->bottom;
        }
        else
        {
            tmp->bottom = b;
            tmp = tmp->bottom;
            b = b->bottom;
        }
    }
    if(a) tmp->bottom = a;
    else tmp->bottom = b;

    return res->bottom;
}

Node *flatten(Node *root)
{
   // Your code here
   if(root == NULL or root->next == NULL)
   {
       return root;
   }
   
   root->next = flatten(root->next);
   root = mergeList(root, root->next);
   
   return root;
}




problem link - https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1


 

Expected Time Complexity: O(N*M)
Expected Auxiliary Space: O(1)



Example 1:

Input:
5 -> 10 -> 19 -> 28
|     |     |     | 
7     20    22   35
|           |     | 
8          50    40
|                 | 
30               45
Output:  5-> 7-> 8- > 10 -> 19-> 20->
22-> 28-> 30-> 35-> 40-> 45-> 50.

Explanation:
The resultant linked lists has every 
node in a single level.
(Note: | represents the bottom pointer.)