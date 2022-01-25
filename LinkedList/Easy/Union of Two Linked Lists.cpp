struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
    set<int> s;
    
    while(head1)
    {
        s.insert(head1->data);
        head1 = head1->next;
    }
    
    while(head2)
    {
        s.insert(head2->data);
        head2 = head2->next;
    }
    
    Node* root = new Node(0);
    Node* tail = root;
    
    for(auto it : s)
    {
        tail->next = new Node(it);
        tail = tail->next;
    }
    
    root = root->next;
    return root;
}


problem link - https://practice.geeksforgeeks.org/problems/union-of-two-linked-list/1


Example 1:

Input:
L1 = 9->6->4->2->3->8
L2 = 1->2->8->6->2
Output: 1 2 3 4 6 8 9