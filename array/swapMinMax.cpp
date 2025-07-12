#include<bits/stdc++.h>
using namespace std;


void swap(int arr[],int size)
{
    int num=INT_MAX;
    int Num=INT_MIN;
    int mindex,Mindex;
    for(int i=0;i<size;i++){
        if(arr[i]<num)
        {
            num=arr[i];
            mindex=i;
        }
        if(arr[i]>Num)
        {
            Num=arr[i];
            Mindex=i;
        }
    }
    swap(arr[mindex],arr[Mindex]);
}

int main(){
    
    int arr[]={4,-1,9,-8,5,6,99};
    int size=7;

    swap(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
