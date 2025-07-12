#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the number to find factorial: ";
    int n;
    cin>>n;
    int i=1;
    int fact=1;
    while(i<=n)
        {
            fact*=i;
            i++;

        }
    cout<<fact;
    return 0;
}
