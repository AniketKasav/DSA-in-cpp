#include<bits/stdc++.h>
using namespace std;



void unique(int arr[],int size){

    for(int i=0;i<size;i++)
    {
        int count=0;
        for(int j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            cout<<arr[i]<<" ";
        }
    }


}

int main(){
    
    int arr[]={1,1,2,3,4,4,5,5,3,6,7,8,8};
    int size=13;
    unique(arr,size);

    return 0;
}
