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

void kthlevel(node* root,int k){

    if(root==NULL){
        return ;
    }

    if(k==1){
        cout<<root->data<<" ";
    }

    kthlevel(root->left,k-1);
    kthlevel(root->right,k-1);
    

}

int main(){
    
    vector<int>preorder1={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    node* root=buildtree(preorder1);

    int k=3;
    kthlevel(root,k);

    return 0;
}
