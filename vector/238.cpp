#include<bits/stdc++.h>
using namespace std;

// Product of array except self
// brute force approach optimal in leetcode 238  using prefix and suffix

vector<int> product(vector<int> nums){
    int n=nums.size();
    vector<int>ans(n,1);
    for(int i=0;i<n;i++){
        int product=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                product*=nums[j];
            }
        }
        ans[i]=product;  // .push_back
    }
    return ans;
}

int main(){
  
    vector<int> nums={1,2,3,4};
    vector<int>result=product(nums);
    for(int it:result){
        cout<<it<<" ";
    }
    return 0;
}
