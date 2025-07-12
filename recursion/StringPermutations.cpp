#include<bits/stdc++.h>
using namespace std;

void allper(string &str,int idx){

    if(idx==str.length()){
       cout<<str<<"  ";
    }

    for(int i=idx;i<str.length();i++){
        swap(str[idx],str[i]);
        allper(str,idx+1);

        swap(str[idx],str[i]);
    }

}


int main(){

    string str="abc";
    allper( str,0);
    return 0;
}
