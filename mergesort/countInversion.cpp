// this the recursion and merge sort based problem

#include<bits/stdc++.h>
using namespace std;

int merge(vector<int>& vec,int st,int end,int mid){

    vector<int>temp;
    int count=0;
    int i=st,j=mid+1;
    while( i<=mid && j<=end){
        if(vec[i]<=vec[j]){
            temp.push_back(vec[i]);
            i++;
        }else{
            temp.push_back(vec[j]);
            j++;
            count+=mid-i+1;
        }
    }
    while(i<=mid){
        temp.push_back(vec[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(vec[j]);
        j++;
    }
    for (int k = 0; k < temp.size(); ++k) {
    vec[st + k] = temp[k];
}

    return count;

}


int mergesort(vector<int>& vec,int st,int end){

    if(st<end){

        int mid=st+(end-st)/2;
        int count1=mergesort(vec,st,mid);
        int count2=mergesort(vec,mid+1,end);
        int count3=merge(vec,st,end,mid);
        return count1+count2+count3;
    }
    return 0;
}

int main(){
    
    vector<int> vec={6,3,5,2,7};

    int count=mergesort(vec,0,vec.size()-1);
    cout<<"The count of inversion pairs :"<<count;
    return 0;
}
