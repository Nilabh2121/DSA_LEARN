#include<iostream>
using namespace std;
int main(){
    int num=5;
    cout<<num<<endl;

    cout<<"Address of num is "<< &num<<endl;

    int *ptr =&num;
    cout<<"Value is : " <<*ptr<<endl;


    double d=4.4;
    double *p2 =&d;//Assigning a pointer 
    cout<<"Address of num is "<< p2<<endl;
    cout<<"Value is : "<< *p2<<endl;
    

    cout<<sizeof(num)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(ptr)<<endl; // Size Of pointer is always 8 byte because it stores only address .
    return 0;
}