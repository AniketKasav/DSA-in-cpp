#include<bits/stdc++.h>
using namespace std;



bool check()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int power=2;
    if(n%2!=0)
        {
            return false;   
        }
    while(power<=n)
    {
        if(n==power)
        {
            return true;   
        }
        power*=2;
    }
    return false;
}
int main(){
    cout<<check();
    return 0;
}
