class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        
        unordered_set<int> s;
        
        Node* tmp = head2;
        while(tmp != NULL)
        {
            s.insert(tmp->data);
            tmp = tmp->next;
        }
        
        int count = 0;
        int da; 
        while(head1 != NULL)
        {
            da = x - head1->data;
            if(s.find(da) != s.end()){
              count++;  
            } 
            head1 = head1 -> next;
        }
        return count;
    }
};


problem link - https://practice.geeksforgeeks.org/problems/count-pairs-whose-sum-is-equal-to-x/1