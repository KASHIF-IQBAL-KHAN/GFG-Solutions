/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/
/*
 *  @author Kashif Iqbal
 *  @since 28-DEC-2020
 */


/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
vector<int> rightView(Node *root)
{
    if(root == NULL)
        return {};
    int size;
    queue<Node*> qu;
    vector<int> vi;
    qu.push(root);
    while(!qu.empty()){
        size = qu.size();

        while(size){
            Node *curr = qu.front();
            qu.pop();
            if(size == 1)
                vi.push_back(curr->data);
            if(curr->left)
                qu.push(curr->left);

            if(curr->right)
                qu.push(curr->right);
            size--;
        }
    }
    return vi;
}
