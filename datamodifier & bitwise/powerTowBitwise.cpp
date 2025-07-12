#include<bits/stdc++.h>
using namespace std;



bool check(int n)
{
    if(n<=0)
    {
        return false;
    }
    if((n&(n-1))==0)
    {
        return true;
    }
    return false;
}

int main(){
    
    // 1  = 0001  (2^0)
    // 2  = 0010  (2^1)
    // 4  = 0100  (2^2)
    // 8  = 1000  (2^3)
    // 16 = 00010000 (2^4)
    // 8  = 1000
    // 7  = 0111
    // 8&7=0000
    // 16 = 10000
    // 15 = 01111
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout << boolalpha << check(n);
    return 0;
}
