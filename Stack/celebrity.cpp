#include<bits/stdc++.h>
using namespace std;

int celebrity(vector<vector<int>>& arr){
    int n=arr.size();
    stack<int>st;
    for(int i=0;i<n;i++){
        st.push(i);
    }

    while(st.size()>1){            // do not use the n because n is not get updated
        int i=st.top();   st.pop();
        int j=st.top();   st.pop();

        if(arr[i][j]==0){
            st.push(i);
        }else{
            st.push(j);
        }
    }
    int cele=st.top();
    for(int i=0;i<n;i++){
        if(i!=cele && arr[i][cele]==0 || arr[cele][i]==1){
            return -1;
        }
    }


    return cele;
}



int main(){
 
    vector<vector<int>>arr={{0,1,0},{0,0,0},{0,1,0}};

    cout<<celebrity(arr);



    return 0;
}
