class Solution {
public:
    Node *update(Node *start,int p)
    {
        //Add your code heren
        int count = 0;
        Node* head = start;
        Node* last;
        
        while(head != NULL)
        {
            count++;
            last = head;
            head = head->next;
        }
        
        head = start;
        if(count != 0)
        {
            while(p--)
            {
                head->prev = last;
                last->next = head;
                
                
                last = head;
                head = head->next;
            }
            head->prev = NULL;
            last->next = NULL;
            return head;
        }
        return start;
    }
};


problem link - https://practice.geeksforgeeks.org/problems/rotate-doubly-linked-list-by-p-nodes/1

