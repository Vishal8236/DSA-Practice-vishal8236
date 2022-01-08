struct Node* reverseList(struct Node *head)
{
    struct Node *curr=head,*next=NULL,*pre=NULL;
    if(head==NULL && head->next==NULL){
        return head;
    }
    while(curr!=NULL){
        next=curr->next;
        curr->next=pre;
        pre=curr;
        curr=next;
    }
    return pre;
}


Problem link - https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1/