#include<bits/stdc++.h>
using namespace std;

int main(){
    

    int ans=0,power=1;
    int des=100;
    while(des>0)
    {
        int rem=des%2;
        des/=2;
        ans+=rem*power;
        power*=10;
    }
    cout<<ans;
 
    return 0;
}
