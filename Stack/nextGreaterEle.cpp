#include<bits/stdc++.h>
using namespace std;


vector<int> nextGreater(vector<int> arr){

    stack<int>s;
    vector<int>ans(arr.size(),0);
    for(int i=arr.size()-1;i>=0;i--){
        while(!s.empty() && s.top()<=arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;
        }else{
            ans[i]=s.top();
        }
        s.push(arr[i]);
    }
    return ans;


}

int main(){
 
    //greater ele = immediate greater and present at the right of the ele
    vector<int> arr={6,8,0,1,3};

   vector<int>ans = nextGreater(arr);
   for(auto it:ans){
    cout<<it<<" ";
   }

    return 0;
}
