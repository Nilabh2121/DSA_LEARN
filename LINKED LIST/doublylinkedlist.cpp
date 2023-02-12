#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // Constructor

    Node(int d){
        this->data =d;
        this-> prev =NULL;
        this-> next =NULL;
    }

};
//traversing a linked list
void print(Node* head ){
    Node* temp =head;

    while(temp != NULL){
        cout<<temp-> data<<" ";
        temp= temp-> next;
        }
        cout<<endl;
}

//getting length of the linked list
int getlength(Node* head){
    Node* temp =head;
    int len =0;
    while(temp != NULL){
        len++;
        temp= temp-> next;
        }
        return len; 
}

//insertat Head

void insertathead(Node* &head,Node* &tail, int d){

   if(head==NULL){
    Node* temp = new Node(d);
    head =temp;
    tail =temp;
   }
   else{
     Node* temp = new Node(d);
    temp -> next =head;
    head-> prev = temp;
    head = temp ;
   }
}


//Insert at TAIL 

void insertattail(Node* &tail ,Node* &head ,int d){
    if(tail==NULL){
        Node* temp = new Node(d);
        tail=temp;
        head =temp;
    }
    else{
        Node*temp = new Node(d);
        tail -> next =temp;
        temp-> prev =tail;
        tail =temp;
    } 
}

//Insert at position 

void insertatposition(Node* &head , int position,int d,Node* &tail){
    if(position==1){
        insertathead(head,tail,d);
        return;
    }
    else{
        Node* temp = head;
        int cnt =1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
//Insert at the last node
    if(temp->next == NULL){
        insertattail(tail,head,d);
        return;
    }

    // insert in middle 

    Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp-> next;
    temp->next->prev = nodetoinsert;
    temp->next =nodetoinsert;
    nodetoinsert->prev = temp;



    }

}

int main(){
    Node* node1 = new Node(10);
    Node* head =node1;
    Node* tail =node1;

    print(head);

    insertathead(head,tail,12);
    print(head);

    insertathead(head,tail,5);
    print(head);

    insertathead(head,tail,16);
    print(head);

    insertattail(tail,tail,27);
    print(head);

    insertatposition(head ,4, 45,tail);
    print(head);
    
    insertatposition(head ,7, 45,tail);
    print(head);

    cout<<getlength(head)<<endl;

}