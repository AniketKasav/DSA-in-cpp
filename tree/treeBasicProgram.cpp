// Height of the tree
// count of the node
// sum of all nodes
// all implemented using recurssion
// build the tree firstly

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


// main program start from here

int heightOfTree(node* root){

    if(root==NULL)return 0;

    int leftht=heightOfTree(root->left);
    int rightht=heightOfTree(root->right);

    return max(leftht,rightht)+1;
}

int countOfNodes(node* root){
    
    if(root==NULL)return 0;
    int leftcount=countOfNodes(root->left);
    int rightcount=countOfNodes(root->right);

    return leftcount+rightcount+1;

}

int sumOfNodes(node* root){

    if(root==NULL)return 0;

    int leftsum=sumOfNodes(root->left);
    int rightsum=sumOfNodes(root->right);
    return leftsum+rightsum+root->data;

}




int main(){

    vector<int>preorder1={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    node* root=buildtree(preorder1);

    cout<<"Height of the tree :"<<heightOfTree(root)<<endl;
    cout<<"Count of the nodes :"<<countOfNodes(root)<<endl;
    cout<<"Sum of the nodes :"<<sumOfNodes(root)<<endl;
    
    return 0;
}
