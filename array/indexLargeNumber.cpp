#include<bits/stdc++.h>
using namespace std;



int largest(int arr[],int size){
    int num=INT_MIN;
    int index=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>num)
        {
            num=arr[i];
            index=i;
        }

    }
    return index;
    
}

int main(){
    
    //find the index of the largest number
    int arr[]={2,5,7,8888,-21,20,-8,-98,99};
    int size=9;
    cout<<largest(arr,size);

    return 0;
}
