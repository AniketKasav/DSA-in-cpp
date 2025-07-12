#include<bits/stdc++.h>
using namespace std;


// int binary(int arr[],int target,int size)
// {
//     //iterative approach
//     int st=0,end=size-1;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         if(target>arr[mid]){
//             st=mid+1;
//         }
//         else if (target<arr[mid]) 
//         {
//             end=mid-1;
//         }
//         else 
//         {
//             return mid;
//         }
    

    
//     }

//     return -1;
// }

int binary(int arr[],int target,int st,int end ){
    if(st<=end)
    {
        int mid=st+(end-st)/2;
        if(target>arr[mid]){
            return binary(arr,target,mid+1,end);
        }
        else if(target<arr[mid])
        {
           return binary(arr,target,st,mid-1);
        }
        else{
            return mid;
        }
    }
    return -1;
}


int main(){

    // binary search work with sorted array only
    //return the index at which target present else -1

    int arr[]={-2,-1,1,2,4,5,8,9};//size=8
    int target=8;
    int size=8;
    cout<<binary(arr,target,0,size-1);


    return 0;
}
