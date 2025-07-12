#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int ans=0,power=1;
    int bin=1100101;

    while(bin>0)
    {
       int rem=bin%10;
       ans+=rem*power;
       power*=2;
       bin/=10;
    }
    cout<<"ans:"<<ans;

    return 0;
}
