#include<bits/stdc++.h>
using namespace std;

class Stack{
    vector<int>v;

public:
    void push(int val){
     v.push_back(val);   
    }

    void pop(){
        if(!v.empty()){
        v.pop_back();
        }
    }

    int top(){
        if(!v.empty()){
        return v[v.size()-1];
        }else{
            cout<<"Stack is empty";
        }
    }

    bool empty(){
        return v.size()==0;
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    s.top();

    return 0;
}
