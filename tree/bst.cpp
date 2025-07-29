// Build a Binary Tree
// tree traversal
// 1. preorder

#include<bits/stdc++.h>
using namespace std;

class node{
public: 
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=right=NULL;
    }
};

static int idx=-1;
node* buildtree(vector<int>preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    node* root=new node(preorder[idx]);
    root->left=buildtree(preorder);
    root->right=buildtree(preorder);
    return root;
}

void preorder(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void inorder(node* root){

    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void postorder(node* root){

    if(root==NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

void levelorder(node* root){

    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>0){
        node* curr=q.front();
        q.pop();
        if(curr==NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }
        cout<<curr->data<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }

}



int main(){
 
    vector<int>preorder1={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    node* root=buildtree(preorder1);
    // cout<<root->data<<endl;
    // cout<<root->left->data<<endl;
    // cout<<root->right->data<<endl;

    // treversal 
    // preorder
    preorder(root);
    cout<<endl;

    inorder(root);
    cout<<endl;

    postorder(root);
    cout<<endl;

    levelorder(root);
    cout<<endl;


    return 0;
}
