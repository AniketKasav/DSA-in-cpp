#include<iostream>
#include<vector>
using namespace std;

int find(vector<int>& vec,int target)
{
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]==target)
        {
            cout<<"Element the found at: "<<i;
            return 0;
        }
    }
    cout<<"Element not found";
    return 0;
}

int main(){

    int target=2;
    vector<int>vec={1,2,4,9,8,6,3,2};
    find(vec,target);
    return 0;
}
