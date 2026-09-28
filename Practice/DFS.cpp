#include<iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};

void pre(TreeNode* root){
    if(root == NULL) return;
    cout << root -> val << "    ";
    pre(root->left);
    pre(root->right);
}

void in(TreeNode* root){
    if(root == NULL) return;
    in(root->left);
    cout << root -> val << "    ";
    in(root->right);
}

void post(TreeNode* root){
    if(root == NULL) return;
    post(root->left);
    post(root->right);
    cout << root -> val << "    ";
}

int main(){
    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left  -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);
    root -> right -> left = new TreeNode(6);
    root -> right -> right = new TreeNode(7);

    cout<<"Preorder(Root,L,R):  ";
    pre(root);
    cout <<endl;

    cout<<"Inorder(L,Root,R):   ";
    in(root);
    cout <<endl;    

    cout<<"Postorder(L,R,Root):  ";
    post(root);
    cout <<endl;    
}
