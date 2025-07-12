#include<bits/stdc++.h>
using namespace std;

int main(){

    int x=10;
    cout<<&x<<endl;  // address of operator which gives the address of variable

    // syntax of pionter
    int *ptr=&x;
    cout<<ptr<<endl;
    cout<<&ptr<<"  address of ptr"<<endl;

    // pointer to pointer
    int** ptr2=&ptr;
    cout<<"p to p: "<<ptr2<<endl;

    //dereferencing
    cout<<*ptr<<endl;
    cout<<*(ptr2)<<endl; // address of ptr
    cout<<**ptr2<<endl; // value of a or *ptr

    // null pointer
    int* p=NULL;
    cout<<p;

    // array pointer that is array name is pointer which point to the first value of array
    int arr[4]={1,2,3,4};
    cout<<arr<<endl; 
    cout<<*arr<<endl;
    return 0;
}
