#include<bits/stdc++.h>
using namespace std;


int find(vector<int>& height){

    int ans=0;
    int n=height.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
            int w=j-i;
            int ht=min(height[i],height[j]);
            int area=w*ht;
            ans=max(area,ans);

        }
    }
    return ans;
    

}

int main(){

    //brute force approach optimize is in leetcode problem 11
    vector<int>vec={1,8,6,2,5,4,8,3,7};
    cout<<"The maximum water area is : "<<find(vec);
    return 0;
}
