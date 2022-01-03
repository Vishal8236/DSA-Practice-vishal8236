class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // code here
        if(!node) return;
        mirror(node->left);
        mirror(node->right);
        swap(node->left, node->right);
    }
};


problem link - https://practice.geeksforgeeks.org/problems/mirror-tree/1/?page=1&company[]=Goldman%20Sachs&query=page1company[]Goldman%20Sachs#
