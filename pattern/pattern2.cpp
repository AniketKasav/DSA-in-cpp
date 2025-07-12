#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    // int num=1;
    for(int i=0;i<n;i++){
        // for(int j=0;j<=i;j++)
        // {
        //     cout<<num+i-j;
        // }

        for(int j=i+1;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }


    return 0;
}