#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(11);
    q.push(13);

    cout<<"front of queue is : "<<q.front()<<endl;

    cout<<"Size of queue is : "<<q.size()<<endl;

    q.pop();

    cout<<"Size of queue is : "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<< "Queue is not empty"<<endl;
    }

    return 0;
}

