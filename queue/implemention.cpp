#include<iostream>
#include<queue>
#include<deque>
using namespace std;

// from scratch using ll

    class node{

        public:
        int data;
        node* next;

        node(int val){
            data=val;
            next=NULL;
        }
    };

    class queue_{

        public:
        node *head;
        node *tail;
        queue_(){
            head=tail=NULL;
        }

        void push(int val){
            node* newnode=new node(val);
            if(empty()){
                head=tail=newnode;
            }else{
                
                tail->next=newnode;
                tail=newnode;
            }
        }

        void pop(){
            if(empty()){
                cout<<"queue is empty";
                return;
            }else{
                node* temp=head;
                head=head->next;
                delete temp;
            }
        }

        int front(){
            if(empty()){
                cout<<"queue is empty";
                return -1;
            }else{
                return head->data;
            }
        }

        bool empty(){
            return head==NULL;
        }
    };


int main(){
    // queue_ q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // while(!q.empty()){
    //     cout<<q.front()<<"  ";
    //     q.pop();
    // }

    deque<int>dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(3);
    while(!dq.empty()){
        cout<<dq.front()<<"   ";
        dq.pop_front();
    }
    return 0;
}
