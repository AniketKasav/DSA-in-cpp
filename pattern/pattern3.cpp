#include<bits/stdc++.h>
using namespace std;

//    *
//   ***
//  *****
// *******
//--------------------
//  *****
//   ***
//    *

int main(){

    int n=4;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<i+1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-2*i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }



    return 0;
}
