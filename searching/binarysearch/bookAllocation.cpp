#include<bits/stdc++.h>
using namespace std;


bool isvalid(vector<int>& arr,int n,int m,int allowedPages){
    // check the mid is valid solution
    int stu=1,pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>allowedPages) return false;
        if(arr[i]+pages<=allowedPages){
            pages+=arr[i];
        }else{
            stu++;
            pages=arr[i];
        }

    }
    return stu > m ? false : true;  // return must be important
}



int bookAllocate(vector<int>& arr ,int n,int m){
    // find the min no in the range of the possible ans series
    if(m>n) return -1;

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    int st=0,end=sum;
    int ans=-1;
    
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isvalid(arr,n,m,mid))
        {
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }

    }
    return ans;
}

int main(){

    vector<int> vec={15,17,20};
    int n=3; // no of books
    int m=2; // no of students
    cout<<bookAllocate(vec,n,m);
    return 0;
}
