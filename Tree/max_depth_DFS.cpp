#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

//max depth of tree
int maxDepth(TreeNode* root){
    if(!root) return 0;

    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

int main(){
    
    TreeNode* root = NULL;
    //
    return 0;
}