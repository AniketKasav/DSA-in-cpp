#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int>& vec)
{   
    int left=0,right=vec.size()-1;
    while(left<right)
    {
        swap(vec[left],vec[right]);
        left++;
        right--;
    }
    return vec;
}


int main(){

    vector<int> vec={1,4,7,8,5,6};
    reverse(vec);
    for(int i:vec)
    {
        cout<<i<<" ";
    }
    return 0;
}