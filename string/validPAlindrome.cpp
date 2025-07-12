#include<bits/stdc++.h>
using namespace std;

int main(){

    // consider only alphnumeric letter
    // ignore the other letter in string
    // convert the upper case into lower case

    string str;
    cout<<"Enter the string :";
    getline(cin,str);
    int flag=1;

    int st=0,end=str.length()-1;
    while(st<end){
        if(!isalnum(str[st])){
            st++;
            continue;
        }
        if(!isalnum(str[end])){
            end--;
            continue;
        }
        if(str[st]!=str[end]){
            flag=0;
        }
        st++;
        end--;
    }
    if(flag==1){
        cout<<"string is palindrome";
    }
    else{
        cout<<"string is not palindrome";
    }
    return 0;
}
