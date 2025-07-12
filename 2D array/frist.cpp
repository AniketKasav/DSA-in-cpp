#include<bits/stdc++.h>
using namespace std;


int maxRow(vector<vector<int>> vec){
    int row=vec.size();
    int col=vec[1].size();
    int maxsum=INT_MIN;
    for(int i=0;i<col;i++){
        int rowsum=0;
        for(int j=0;j<row;j++){
            rowsum+=vec[j][i];
        }
        maxsum=max(maxsum,rowsum);
    }
    return maxsum;
}

int main(){
  
    // int arr[3][4];
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>arr[i][j];
        
    //     }
     
    // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
        
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    vector<vector<int>>vec={{1,2,3},{4,5,-26},{7,8,20}};
    // cout<<vec.size()<<endl;  ---> no of rows
    // cout<<vec[0].size();     ---> no of column
    cout<<"Max sum is "<<maxRow(vec);


    return 0;
}
