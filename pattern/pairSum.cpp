#include<bits/stdc++.h>
using namespace std;

vector<int> pairsum(vector<int> vec,int target){
    // int n=vec.size();
    vector<int>ans;
    // bruteforce approach
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++){
    //         if(vec[i]+vec[j]==target)
    //         {
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans;
    //         }
    //     }
    // }

    //TWO POINTER APPROACH

    int l=0,r=vec.size()-1;
    while(l<r)
    {
        if(vec[l]+vec[r]>target)
        {
            r--;
        }else if(vec[l]+vec[r]<target){
            l++;
        }
        else{
            ans.push_back(l);
            ans.push_back(r);
            return ans;
        }
    }
   


}

int main(){
    
    // return the pair i,n, sorted with target sum and pair must be present 
    vector<int> vec={1,2,4,6,7,8};
    int target=10;
    vector<int> result=pairsum(vec,target);
    cout<<"First index is "<<result[0]<<" Second index is "<<result[1];

    return 0;
}
