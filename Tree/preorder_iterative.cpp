#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:

    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preorder_iterative(TreeNode* root){
    stack<TreeNode*> st;

    st.push(root);

    while(!st.empty()){
        TreeNode* topel = st.top();
        st.pop();
        cout<<topel->val<<endl;

        if (topel->right) st.push(topel->right);
        if (topel->left) st.push(topel->left);
    }
}

// Still working ...
TreeNode* treeConstruct(){
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;

    TreeNode* root = NULL;
    TreeNode* temp = NULL;

    stack<TreeNode*> st;

    for (int i = 0; i < n; i++)
    {
        if (root != NULL){
            cout<<"Left or Right? (type: l or r respectively): ";
            char ch;
            cin>>ch;
            int val;
            cout<<"Enter the value of node or \"n\" for null: ";
            try
            {
                cin>>val;
            }
            catch(const std::exception& e)
            {
                //
            }
            
            cin>>val;
        }
        cout<<"Enter the value of node: ";
        int val;
        cin>>val;
        if (root == NULL)
        {
            root = new TreeNode(val);
            temp = root;
            st.push(temp);
        }
    }
    
}

int main(){
    // Example
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    preorder_iterative(root);
    return 0;
}