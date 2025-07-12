#include<bits/stdc++.h>
using namespace std;


void merge(vector<int>& arr,int st,int end,int mid){

    int i=st,j=mid+1;
    vector<int>temp;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
        temp.push_back(arr[i]);
        i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=end){
            temp.push_back(arr[j]);
            j++;
        }
        for(int i=0;i<temp.size()-1;i++){
            arr[st+i]=temp[i];
        }
}

void mergesort(vector<int>& arr,int st,int end){
    
    if(st<end){

        int mid=st+(end-st)/2;
        mergesort(arr,st,mid);
        mergesort(arr,mid+1,end);
        merge(arr,st,end,mid);
    }


}


int main(){
    
    vector<int> arr={2,1,4,5,7,3};

    mergesort(arr,0,arr.size()-1);

    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}
