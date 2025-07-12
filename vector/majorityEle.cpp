#include<bits/stdc++.h>
using namespace std;


int Majority(vector<int> vec)
{
    int n=vec.size();

    // for(int i=0;i<n;i++)  // o(n^2)
    // {
    //     int ans=vec[i],freq=0;
    //     for(int j=0;j<n;j++)
    //     {
    //        if( vec[i]==vec[j])
    //        {
    //         freq++;
    //        }
    //     }
    //     if(freq>n/2)
    //     {
    //         return ans;
    //     }
    // }

    // sorting the vector o(nlogn+n)
    // sort(vec.begin(),vec.end());
    // 1 1 2 2 2
    // int freq=0,ans=vec[0];
    // for(int ele:vec)
    // {
    //     if(ele==ans)
    //     {
    //         freq++;
    //     }
    //     else{
    //         freq=1;
    //         ans=ele;
    //     }
    //     if(freq>n/2) return ans;
    // }

    // using MOORE'S VOTING ALGORITHM

    int freq=0,ans=0;
    for(int ele:vec)
    {
        if(freq==0)
        {
            ans=ele;
        }
        if(ele==ans)
        {
            freq++;
        }else freq--;

    }
    return ans;



}

int main(){
    
    // Majority ele freq>n/2

    vector<int>vec={1,1,2,2,1,2,2,2};
    cout<<Majority(vec);



    return 0;
}
