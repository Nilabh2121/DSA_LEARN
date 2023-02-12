#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->next= NULL;
    }

    //Destructor

    ~Node(){
        int value =this-> data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory delete is "<<value<<endl;
        }
    

};

void print(Node* tail){
    Node* temp =tail;

    if(tail==NULL){
        cout<<"Linked list is empty"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail =tail->next;
        }
        while(tail!=temp);
        cout<<endl;
}

void insertNode(Node* &tail, int element , int d){
    

    //empty list
    if(tail==NULL){
        Node* Newnode = new Node(d);
        tail = Newnode;
        Newnode->next=Newnode;
    }
    else{
        //non empty list 
        //Assuming thst the lement is present in the list
        Node* curr =tail;
        while(curr->data!=element){
            curr =curr->next;
        }

        Node* temp =new Node(d);
        temp->next=curr->next;
        curr->next=temp;

    }
}

void deleteNode(Node* &tail, int value ){
    if(tail == NULL){
        cout<<"EMPTY"<<endl;
        return;
    }
    else{
        // assuming the value is present in the linked list

        Node* prev =tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev= curr;
            curr=curr->next;

        }
        prev->next=curr->next;
// if 1 node linked list is there 

        if(curr==prev){
            tail =NULL;
        }

        // for >=2 list node
         if(tail==curr){
            tail=prev;
        }
        curr->next= NULL;
        delete curr;

    }
}

int main(){
    Node* tail =NULL;

    insertNode(tail,1,3);
    print(tail);
/*
    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);

    insertNode(tail,5,6);
    print(tail);

    deleteNode(tail,3);
    print(tail);

    deleteNode(tail,7);
    print(tail);
    */

    deleteNode(tail,3);
    print(tail); 
}