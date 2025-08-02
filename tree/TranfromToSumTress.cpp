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

int sumtree(node* root){

    if(root==NULL){
        return 0;
    }
    int leftsum=sumtree(root->left);    
    int rightsum=sumtree(root->right);
    root->data+=leftsum+rightsum;
    return root->data;

}



int main(){
    vector<int>preorder1={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    node* root=buildtree(preorder1);

    cout<<"Before conversion :";
    preorder(root);

    cout<<"\nAfter conversion (sum of all node):";
    cout<<sumtree(root);
    cout<<endl;

    cout<<"\nAfter conversion :";
    preorder(root);

    return 0;
}
