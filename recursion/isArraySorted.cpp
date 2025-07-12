#include<bits/stdc++.h>
using namespace std;

bool isArraySorted(vector<int> arr,int n){

    if(n==0){
        return true;
    }

    return arr[n]>=arr[n-1] && isArraySorted(arr,n-1);

}

int main(){
   
    vector<int> arr={1,2,5,4,5};
    int n=arr.size()-1;
    cout<<isArraySorted(arr,n);
    return 0;
}
