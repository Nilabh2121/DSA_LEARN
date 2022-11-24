#include<iostream>
using namespace std;
int main(){
    //Pointer to int is Created and Pointed to Some Garbage Address
    //int *p;//Bad Practice// int *p=0; = segmentation fault
    //cout<<*p<<endl;

    int i=5;

    int *q=&i;  //same way to Initailize Pointer 
    cout<<q<<endl;
    cout<<*q<<endl;

    int *p=0; // Same 
    p=&i;
    cout<<p<<endl;
    cout<<*p<<endl;

    return 0;

}