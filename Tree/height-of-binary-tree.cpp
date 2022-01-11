class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here
        if(node == NULL)
        {
            return 0;
        }
        
        int lh = height(node->left);
        int rh = height(node->right);
        
        return 1+max(lh, rh);
    }
};

problem link - https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1