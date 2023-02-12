#include <iostream>
using namespace std;


class Node {
    public:
    int data;
    Node* next;

//constructor
    Node(int data){
        this -> data =data;
        this -> next = NULL;

    }

    // destructor

    ~Node(){
        int value = this->data;
        if(this-> next != NULL){
            delete next;
            this->next =NULL;
        }
        cout<<"Memory is free "<<value <<endl;
    }
};

 void insertathead( Node* &head ,int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}

void insertatend( Node*  &tail , int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;

}
 void insertatposition(Node* &head, int d, int position, Node* &tail){
// insert at start
    if(position==0){
        insertathead(head,d);
        return; 
    }
    Node* temp = head;
    int cnt =1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
//Insert at the last node
    if(temp->next == NULL){
        insertatend(tail,d);
        return;
    }

    Node* Nodetoinsert = new Node(d);
    Nodetoinsert-> next =temp->next;
    temp-> next = Nodetoinsert;


 }
 //Delete node code 

 void deleteNode(int position, Node* &head){
    if(position==1){
        Node* temp =head;
        head = head->next;
        delete temp;
    }
    else{
        Node* current=head;
        Node* prev =NULL;
        int cnt =1;
        while(cnt<position){
            prev = current;
            current = current -> next;
            cnt++;
        }

        prev -> next =current-> next;
        current->next=NULL;
        delete current;
    }

 }

void print(Node* &head){
    Node* temp = head;

    while(temp!= NULL){
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}


int main(){
    

//created a new node

    Node* node1 = new Node(10);
   // cout<<node1 -> data<<endl;
    //cout<<node1 -> next<<endl;

    //head pointed to node1

    Node* head =node1;
    Node* tail =node1;
    print(head);

    insertatend(tail,12);
    print(head);

    insertatend(tail,7);
    print(head);
    
    insertatposition(head,22,0,tail);
    print(head);

    deleteNode(4,head);
    print(head);

    return 0;
}