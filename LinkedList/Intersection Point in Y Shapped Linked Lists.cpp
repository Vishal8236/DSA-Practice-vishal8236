int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node* temp1 = head1;
    Node* temp2 = head2;

    Node* prev = NULL;
    while(temp1 != NULL)
    {
        prev = temp1;
        temp1 = temp1->next;
        prev->next = prev;
    }
    
    while(temp2 != NULL)
    {
        if(temp2->next == temp2)
        {
            return temp2->data;
        }
        temp2 = temp2->next;
    }
    return -1;
}





Second Approach - using hash set

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node* h1 = head1;
    Node* h2 = head2;
    unordered_set<Node*> data;
    
    while(h1 != NULL)
    {
        data.insert(h1);
        h1= h1->next;
    }
    while(h2 != NULL)
    {
        if(data.find(h2) != data.end())
        {
            return h2->data;
        }
        h2 = h2->next;
    }
    return -1;
}





Input: 
Linked List 1 = 4->1->common
Linked List 2 = 5->6->1->common
common = 8->4->5->NULL
Output: 8


problem link - https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1