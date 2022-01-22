vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int> res;
    queue<Node*> q;
    
    q.push(root);
    bool turn = false;
    
    if(root == NULL) return res;
    while(!q.empty())
    {
        int size = q.size();
        vector<int> tmp;
        
        while(size--)
        {
            Node* node = q.front();
            q.pop();
            
            tmp.push_back(node->data);
            
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            
        }
        if(!turn)
        {
            reverse(tmp.begin(), tmp.end());
        }
        for(int i=0; i<tmp.size(); i++)
        {
            res.push_back(tmp[i]);
        }
        turn = !turn;
    }
    return res;
}


problem link - https://practice.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1


Example 1:

Input:
      1
    /   \
   3     2
Output:1 3 2

Example 2:

Input:
           10
         /     \
        20     30
      /    \
    40     60
Output: 10 20 30 60 40