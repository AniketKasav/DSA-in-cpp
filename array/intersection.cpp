#include<bits/stdc++.h>
using namespace std;



void intersection(int arr1[],int arr2[],int size){

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";
      
            }
        }
    }


}

int main(){
    
    int arr1[]={1,2,3,4,5};
    int arr2[]={2,5,4,0,8};
    int size=5;
    intersection(arr1,arr2,size);

    return 0;
}
