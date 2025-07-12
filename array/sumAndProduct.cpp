#include<bits/stdc++.h>
using namespace std;


pair<int,int> sumProduct(int arr[],int size)
{
    int sum=0,product=1;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
        product*=arr[i];
    }
    return make_pair(sum,product);
}

int main(){
    
    int size;
    cout<<"Enter the number of elments:";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    pair<int,int>result=sumProduct(arr,size);
    cout<<"sum is :"<<result.first<<endl;
    cout<<"product is :"<<result.second;
    return 0;
}
