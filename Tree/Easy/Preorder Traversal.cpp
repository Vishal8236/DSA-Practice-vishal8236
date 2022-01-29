void preo(vector<int>& res, Node* root)
{
    if(root == NULL)
    {
        return;
    }
    res.push_back(root->data);
    preo(res, root->left);
    preo(res, root->right);
    return;
}

//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> res;
  preo(res, root);
  
  return res;
}


problem link - https://practice.geeksforgeeks.org/problems/preorder-traversal/1


Example 1:

Input:
        1      
      /          
    4    
  /    \   
4       2
Output: 1 4 4 2 
Example 2:

Input:
       6
     /   \
    3     2
     \   / 
      1 2
Output: 6 3 1 2 2 