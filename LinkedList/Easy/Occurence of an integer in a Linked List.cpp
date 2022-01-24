class Solution
{
    public:
    int count(struct node* head, int search_for)
   {
       int count=0;;
        while(head!=NULL){
            if(head->data==search_for){
               count++;
            }
            head=head->next;
        } 
        return count;
   }
};


problem link - https://practice.geeksforgeeks.org/problems/occurence-of-an-integer-in-a-linked-list/1

Example 1:

Input:
N = 7
Link List = 1->2->1->2->1->3->1
search_for = 1
Output: 4
Explanation:1 appears 4 times.
Example 2:

Input:
N = 5
Link List = 1->2->1->2->1
search_for = 3
Output: 0
Explanation:3 appears 0 times.

