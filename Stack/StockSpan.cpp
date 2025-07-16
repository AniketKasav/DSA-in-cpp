#include<bits/stdc++.h>
using namespace std;

vector<int> stockspan(vector<int> price){
    vector<int>ans(price.size(),0) ;
    stack<int> s;
    for(int i=0;i<price.size();i++){
        while(s.size()>0 && price[s.top()]<=price[i]){
            s.pop();
        }
            if(s.size()==0){
                ans[i]=i+1;
            }else{
                ans[i]=i-s.top();
            }
        
        s.push(i);
    }
    return ans;


}


int main(){
    
    vector<int>arr={100,80,60,70,60,75,85};

    vector<int>ans=stockspan(arr);
    for(auto it:ans){
        cout<<it<<" "; 
    }

    return 0;
}
