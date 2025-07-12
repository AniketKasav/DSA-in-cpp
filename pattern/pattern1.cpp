//        i
// ABCD   0
//  ABC   1
//   AB   2
//    C   3


#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n=4;
    // char c='A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++)
    //     {
    //         cout<<" ";
    //     }
    //     // for(int j=n-i;j>0;j--){
    //     for(int j=0;j<n-i;j++){
    //         cout<<c;
    //         c+=1;
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        char c='A';
        // for(int j=n-i;j>0;j--){
        for(int j=0;j<n-i;j++){
            cout<<c;
            c+=1;
        }
        cout<<endl;
    }


    return 0;
}
