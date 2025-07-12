#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<int> &arr,int n,int m,int allowedHours){

    int painter=1,hours=0;
    for(int i=0;i<n;i++){
        if(arr[i]>allowedHours) return false;
        if(arr[i]+hours<=allowedHours){
            hours+=arr[i];
        }else{
            painter++;
            hours=arr[i];
        }
    }
    return painter>m ? false : true; 
}

int painterPartiation(vector<int> &arr,int n,int m){

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    int ans=-1;
    int st=0,end=sum;
    while(st<=end){
        if(m>n) return -1;
        int mid=st+(end-st)/2;

        if(isvalid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }

    }
    return ans;
}

int main(){
 
   vector<int> vec={40,30,10,20};
   int n=4; // number of board
   int m=2; // number of painter
    cout<<painterPartiation(vec,n,m);

    return 0;
}
