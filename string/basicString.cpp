#include<bits/stdc++.h>
using namespace std;

int main(){
 
    string str1="hellow world";
    cout<<str1<<endl;

    string str2="";
    cout<<"Enter the another string :";
    cin>>str2;
    cout<<str2<<endl;

    cin.ignore(); //  This clears the leftover newline from the buffer

    string str3;
    cout<<"Enter the one more string :"<<endl;
    getline(cin, str3);  
    cout << "str3 :"<<str3;



    return 0;
}
