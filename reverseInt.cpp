#include<bits/stdc++.h>
using namespace std;



int reverse(int n)
{
    int newint=0;
    int power=1;
    while(n>0)
    {
        int rem=n%10;
        newint=newint*power+rem;
        power*=10;
        n/=10;
    }
    return newint;

}

int main(){

    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"The reverse number is:"<<reverse(n);
    return 0;
}
