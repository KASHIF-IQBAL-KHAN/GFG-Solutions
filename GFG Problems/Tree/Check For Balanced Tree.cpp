/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/
/*
 *  @author Kashif Iqbal
 *  @since 29-DEC-2020
 */

/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// This function should return tree if passed  tree 
// is balanced, else false. 

int height(Node* root){
    if(root == NULL)
        return 0;
    return 1+max(height(root->left) , height(root->right));    
}


bool isBalanced(Node *root)
{
    if(root == NULL)
        return true;
    
    return (isBalanced(root->left) && isBalanced(root->right) && (abs(height(root->left) - height(root->right)) <= 1));
}
