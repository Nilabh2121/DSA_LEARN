#include<iostream>
using namespace std;
int main(){

    int num=5;
    int a=num;
    a++;

    cout<<num<<endl;

    int *p=&num;
    cout<<num<<endl;
    (*p)++;
    cout<<num<<endl;

    int *q=p;
    
    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;


int i=3;
int *t=&i;
*t=*t+1;
cout<<*t<<endl;
t=t+1;
cout<<t<<endl;


    return 0;
}