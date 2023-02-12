#include <iostream>
using namespace std;


class Node {
    public:
    int data;
    Node* next;


    Node(int data){
        this -> data =data;
        this -> next = NULL;

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
 void insertatposition( Node* &head, int d, int position,Node* &tail){
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
    
    insertatposition(head,22,4,tail);
    print(head);
    return 0;
}