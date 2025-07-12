#include<bits/stdc++.h>
using namespace std;

int partion(vector<int>& arr,int st,int end){

    int idx=st-1,pivot=arr[end];
    for(int j=st;j<=end;j++){

        if(arr[j]<pivot){
            idx++;
            swap(arr[idx],arr[j]);
        }
    }   
    idx++;
    swap(arr[idx],arr[end]);
    return idx;

}

void quicksort(vector<int>& arr,int st,int end){

    if(st<end){
        int pivot=partion(arr,st,end);
        quicksort(arr,st,pivot-1);
        quicksort(arr,pivot+1,end);
    }
}

int main(){
    
    vector<int>arr={5,4,7,8,1,2,3};
    // here we consider the last ele as a pivot element
    quicksort(arr,0,arr.size()-1);

    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}
