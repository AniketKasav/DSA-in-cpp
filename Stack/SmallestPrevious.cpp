#include<bits/stdc++.h>
using namespace std;
// previous small => immediate smaller than cuu ele and at the left side of the curr ele;

vector<int> Previous(vector<int>arr){
    stack<int>st;
    vector<int>ans(arr.size(),0);
    for(int i=0;i<arr.size();i++){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i]=-1;
        }else{
            ans[i]=st.top();
        }
        st.push(arr[i]);
        
    }
    return ans;
}



int main(){
 
    vector<int>vec={3,1,0,1,6};
   vector<int>ans = Previous(vec);
    for(auto it:ans){
        cout<<it<<" ";
    }

    return 0;
}
