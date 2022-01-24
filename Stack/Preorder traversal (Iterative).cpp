class Solution{
    public:
    vector<int> preOrder(Node* root)
    {
        //code here
        stack<Node*> s;
        s.push(root);
        
        vector<int> res;
        while(!s.empty())
        {
            int len = s.size();
            
            for(int i=0; i<len; i++)
            {
                Node* nod = s.top();
                res.push_back(nod->data);
                s.pop();
                
                if(nod->right) s.push(nod->right);
                if(nod->left) s.push(nod->left);
            }
        }
        return res;
    }
};

Expected time complexity: O(N)
Expected auxiliary space: O(N)

problem link - https://practice.geeksforgeeks.org/problems/preorder-traversal-iterative/1

Example 1:

Input:
           1
         /   \
        2     3
      /  \
     4    5
Output: 1 2 4 5 3
Explanation:
Preorder traversal (Root->Left->Right) of 
the tree is 1 2 4 5 3.
Example 2

Input:
            8
          /   \
         1      5
          \    /  \
           7  10   6
            \  /
            10 6
Output: 8 1 7 10 5 10 6 6 
Explanation:
Preorder traversal (Root->Left->Right) 
of the tree is 8 1 7 10 5 10 6 6.