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

node* insert(node* root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(val<root->data){
        root->left= insert(root->left,val);
    }else{
        root->right= insert(root->right,val);
    }
    return root;
}

bool search(node* root,int key){
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    if(key<root->data){
        return search(root->left,key);
    }else{
        return search(root->right,key);
    }
}

node* findis(node* root){
    while(root!=NULL && root->left!=NULL){
        root=root->left;
    }
    return root;
}

node* dltnode(node* root,int key){
    if(key<root->data){
        root->left=dltnode(root->left,key);
    }
    else if(key>root->data){
       root->right= dltnode(root->right,key);
    }
    else{  // here root==key   dlt the root
        // case1&2 for 0 or 1 child node
        if(root->left==NULL){
            node* temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            node* temp=root->left;
            delete root;
            return temp;
        }
        else{
            node* inorderSuccessor=findis(root->right);
            root->data=inorderSuccessor->data;
            root->right=dltnode(root->right,inorderSuccessor->data);
        }
    }  
    return root;  
}


void inorder(node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

node* buildtree(vector<int>&arr){
    node* root=NULL;
    for(auto val:arr){
        root=insert(root,val);
    }
    return root;
}



int main(){
    vector<int> arr={3,2,1,5,6,4};
    node* root=buildtree(arr);
    cout<<"tree in inorder :"<<endl;
    inorder(root);

    cout<<endl<<"check key present or not:"<<endl;
    cout<<search(root,8);

    cout<<endl<<"delete node"<<endl;
    dltnode(root,5);
    inorder(root);
    cout<<endl;
    
    return 0;
}
