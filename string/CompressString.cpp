#include<bits/stdc++.h>
using namespace std;

vector<char> compress(vector<char>& vec){
    int n=vec.size();
    int idx=0;
    for(int i=0;i<n;i++){
        char ch=vec[i];
        int count=0;
        while(i<n && vec[i]==ch){
            count++;
            i++;
        }

        if(count==1) vec[idx++]=ch;
        else{
            vec[idx++]=ch;
            string str=to_string(count);
            for( auto dig:str){
                vec[idx++]=dig;
            }
        }
        i--;
    }
    vec.resize(idx);
    return vec;

}

int main(){

    vector<char>vec={'a','a','b','b','c','c','c'};
    vector<char>result=compress(vec);
    for(auto it:result){
        cout<<it<<" ";
    }

    return 0;
}
