#include<bits/stdc++.h>
using namespace std;

void printAllAubsets( vector<int>& arr,int i,vector<int>& ans){

    if(i== arr.size()){
        cout<<"[";
        for( auto it : ans){
            
            cout<<it<<" ";
        }
        cout<<"]  ";
        return;
    }

    ans.push_back(arr[i]);       // Include condition
    printAllAubsets(arr,i+1,ans);

    ans.pop_back();              // Backtracking condition
    printAllAubsets(arr,i+1,ans);


}

int main(){

    vector<int> arr={1,2,3,4};
    vector<int> ans;
    printAllAubsets(arr,0,ans);

    return 0;
}
