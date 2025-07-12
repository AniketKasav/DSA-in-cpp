#include<bits/stdc++.h>
using namespace std;


int peakIndexInMountainArray(vector<int>& arr) {
    int st=1,end=arr.size()-2;

    while(st<=end)
    {
        int mid= st+(end-st)/2;

        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if(arr[mid-1]<arr[mid]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
         return -1;
    }

int main(){
    
    vector<int> vec={2,4,5,8,9,10,3,1,0};
    cout<<"The peak element is : "<<peakIndexInMountainArray(vec);

    return 0;
}
