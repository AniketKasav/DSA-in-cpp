// print the element of the tree which visible from the top view only
 
//          1
//       2    3
//     7    4   5
//  only 1 2 7 3 4   are visible

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

void topView(node* root){

    if(root==NULL){
        return ;
    }
    queue<pair<node*,int>>q; // node* and HD
    map<int,int>m;// HD and node->val
    q.push({root,0});
 
    while(q.size()>0){
        node* curr=q.front().first;
        int currhd=q.front().second;
        q.pop();
        if(m.find(currhd)==m.end()){
            m[currhd]=curr->data;
        }
        // cout<<curr->data<<" ";
        if(curr->left!=NULL){
            q.push({curr->left,currhd-1});
        }
        if(curr->right!=NULL){
            q.push({curr->right,currhd+1});
        }
    }

    for(auto it:m){
        cout<<it.second<<" ";
    }

}




int main(){

    vector<int>preorder1={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    node* root=buildtree(preorder1);
    // int k=3;

    topView(root);
    
    return 0;
}
