#include <bits/stdc++.h>
using namespace std;

class tree{
    public :
        int val;
        tree *l;
        tree *r;
        tree(int val){
            this->val = val;
            r = nullptr;
            l = nullptr;
        }
};

void inorder(tree *root){
    if(!root) return;
    inorder(root->l);
    cout<<root->val << " ";
    inorder(root->r);
}

void preorder(tree *root){
    if(!root) return;
    cout<<root->val << " ";
    preorder(root->l);
    preorder(root->r);
}

void postorder(tree *root){
    if(!root) return;
    postorder(root->l);    
    postorder(root->r);
    cout<<root->val << " ";
}

void dfs(tree *root){
    if(!root) return;
    queue<tree *> q;
    q.push(root);
    while(!q.empty()){
        tree *node = q.front();
        q.pop();
        cout << node->val << " ";
        if(node->l) q.push(node->l);
        if(node->r) q.push(node->r);
    }
}
int main(){
    tree *node = new tree(10);
    node->r = new tree(5);
    node->l = new tree(6);
    return 0;
}