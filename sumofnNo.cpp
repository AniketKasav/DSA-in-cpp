#include<bits/stdc++.h>
using namespace std;


int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}

int main(){
    cout<<"Enter the number upto you want calculate sum :";
    int n;
    cin>>n;
    cout<<"Sum of first "<<n<<" numbers:"<<sum(n);
    return 0;
}
