
class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        if(!head) return head;
        
        Node* head1 = head;
        Node* resN;
        
        int s = 1;
        while(head1 != NULL)
        {
            if(s == k)
            {
                if(head1->next){
                    resN = head1->next;
                }
                else{
                    return head;
                } 
                head1->next = NULL;
                break;
            }
            head1 = head1->next;
            s++;
        }
        
        Node* tmp = resN;
        while(tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = head;
        
        return resN;
    }
};
    


problem link - https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1


Input:
N = 5
value[] = {2, 4, 7, 8, 9}
k = 3
Output: 8 9 2 4 7
Explanation:
Rotate 1: 4 -> 7 -> 8 -> 9 -> 2
Rotate 2: 7 -> 8 -> 9 -> 2 -> 4
Rotate 3: 8 -> 9 -> 2 -> 4 -> 7