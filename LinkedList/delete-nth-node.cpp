int getNthFromLast(Node *head, int n)
{
       // Your code here
    Node* tmp = head;
    int count = 0;
    while(tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    tmp = head;
    int no = count-n;
    count=0;
    if(no >= 0)
    {
        while(tmp != NULL)
        {
            if(count == no)
            {
                return tmp->data;
            }
            count++;
            tmp = tmp->next;
        }
    }
    return -1;
}



optimal approach

int getNthFromLast(Node *head, int n){
    Node *ptr = head, *p = head;
    while(ptr && n--) ptr = ptr->next;
    if(n > 0) return -1;
    while(ptr){
        ptr = ptr->next;
        p = p->next;
    }
    return p->data;
}


problem link - https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1