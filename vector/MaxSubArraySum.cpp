#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>vec={-2,1,-3,4,-1,2,1,-5,4};
    int n=9;
    // for(int st=0;st<n;st++)
    // {
    //     for(int end=st;end<n;end++)
    //     {
    //         for(int i=st;i<=end;i++)
    //         {
    //             cout<<vec[i];
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // BRUTEFORCE APPROACH

    // int maxsum=INT_MIN;
    // for(int st=0;st<n;st++)
    // {
    //     int cursum=0;
    //     for(int end=st;end<n;end++)
    //     {
    //        cursum+=vec[end];
    //        maxsum=max(maxsum,cursum);
    //     }
        
    // }
    // cout<<maxsum;

    // KADANE'S ALGORITHM

    int maxsum=INT_MIN,cursum=0;
    for(int i=0;i<n;i++)
    {
        cursum+=vec[i];
        maxsum=max(maxsum,cursum);
        if(cursum<0)
        {
            cursum=0;
        }
    }
    cout<<"Max sum is :"<<maxsum;
    return 0;
}
