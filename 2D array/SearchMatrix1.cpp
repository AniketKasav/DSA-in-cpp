#include<bits/stdc++.h>
using namespace std;
    

    bool search(vector<vector<int>> mat,int target,int midrow){
        int n=mat[0].size();
        int st=0,end=n-1;
        
        while(st<=end){
            int mid=st+(end-st)/2;
            if(mat[midrow][mid]==target){
                return true;
            }
            else if(target>mat[midrow][mid]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size();
        int n=mat[0].size();
        int sr=0,re=m-1;
        while(sr<=re){
            int mid=sr+(re-sr)/2;
            if(target>=mat[mid][0] && target<=mat[mid][n-1]){
                return search(mat,target,mid);}
            else if(target<mat[mid][0]){
                re=mid-1;
            }
            else{
                sr=mid+1;
            }
            }
             return false;
        }
       
    


int main(){
 
    vector<vector<int>> mat={{1,2,3,21},{4,5,7,8},{8,25,6,32}};
    int target=99;
    if(searchMatrix(mat,target)){
        cout<<"found";
    }else{
        cout<<"Not found";
    }

    return 0;
}
