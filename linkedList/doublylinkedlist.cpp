// scratch implementation

#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

class doublylinkedlist{
    node* head;
    node* tail;

public:
    doublylinkedlist(){
        head=tail=NULL;
    }

    void push_front(int val){

        node* newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
        }else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
    }

    void push_back(int val){
        node* newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
        }else{
            newnode->prev=tail;
            tail->next=newnode;
            tail=tail->next;
        }
    }

    void pop_front(){
        if(head==NULL){
            cout<<"dll is empty";
            return;
        }
        node* temp=head;
        head=head->next;
        if(head!=NULL){
            head->prev=NULL;   
        }
        temp->next=NULL;
        delete temp;
    }

    void pop_back(){
        if(head==NULL){
            cout<<"dll is empty";
            return;
        }
        node* temp=tail;
        tail=tail->prev;
        if(tail!=NULL){
            tail->next=NULL;   
        }
        temp->prev=NULL;
        delete temp;
    }

    void print(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }

};

int main(){

    doublylinkedlist dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    
    dll.print();
    dll.push_back(4);
    dll.print();

    dll.pop_front();
    dll.print();

    dll.pop_back();
    dll.print();

    return 0;
}