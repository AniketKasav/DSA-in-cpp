#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int flag=0;
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            cout<<"Number is not prime";
            flag=1;
            break;
        }
    }
    if(flag==0)cout<<"Number is prime";
    
    return 0;
}
// fact of 12
// 1*12
// 2*6     fact is get repeat after the half so i<√n
// 3*4     √n*√n==n   so cond is i*i<=n        √==alt+251
// 4*3
// 6*2
// 12*1
