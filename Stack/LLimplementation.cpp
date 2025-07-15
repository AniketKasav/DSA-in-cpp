#include<iostream>
#include<list>
using namespace std;

class Stack{
    list<int>ll;

public: 
    void push(int val){
        ll.push_front(val);
    }
    void pop(){
        if(!ll.empty()){
        ll.pop_front();
        }else{
            cout<<"Stack is empty";
        }
    }
    int top(){
        if(!ll.empty()){
        return ll.front();
        }else{
            cout<<"Stack is empty";
        }
    }
    bool empty(){
        return ll.size()==0;
    }

};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    s.top();

    return 0;
}
