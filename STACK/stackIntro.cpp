#include <iostream>
#include<stack> 
using namespace std;

int main(){

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);


    s.pop();

    cout<< "Printing top element   "<<s.top()<<endl;

    if(s.empty()){
        cout<<" Empty stack "<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    cout<<"Stack size "<<s.size()<<endl;

    }