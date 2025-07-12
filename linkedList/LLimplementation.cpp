// LL implementation two way|
// 1. using the list from the stl
// 2. from scratch

// scratch implementation

#include<bits/stdc++.h>
using namespace std;

class node{

public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

class ll{
private:
    node* head;
    node* tail;

public:
    ll(){
        head=tail=NULL;
    }

    void push_front(int val){
        node* newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
        }else{
            newnode->next=head;
            head=newnode;
        }
    }
    
    void push_back(int val){

        node* newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }

    }

    void pop_front(){

        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    void pop_back(){
        if(head==NULL){
            cout<<"ll is empty";
            return;
        }
        if(head->next==NULL){
            delete head;
            return;
        }
        node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
        tail=temp;
        
        
    }

    void insertAt(int val,int pos){
        node* newnode=new node(val);
        node*temp=head;
        if(head==NULL){
            head=tail=newnode;
        }
        for(int i=0;i<pos-1;i++){
           temp=temp->next;
        }
         newnode->next=temp->next;
            temp->next=newnode;

    }


    void print(){
        if(head==NULL){
            cout<<"ll is empty";
        }
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;

    }

};

int main(){
    ll a;
    a.push_front(15);
    a.push_front(10);
    a.push_front(5);
    a.push_back(20);
    a.print();
    a.insertAt(99,2);
    a.print();

    // a.pop_front();
    // a.pop_back();
    // a.print();
   


    return 0;
}
