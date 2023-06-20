#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

int getLength(Node* &head){
    Node* temp=head;
    int count=0;

    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void insertAtHead(Node* &head, int d){
     
     Node* temp = new Node(d);
     temp->next=head;
     head->prev=temp;
     head=temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp= new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPosition(Node* &head, int position, int data){
    
}

int main(){

    Node* node1 = new Node(10);
    Node* head=node1;
    Node* tail=node1;

    print(head);
    cout<<getLength(head)<<endl;

    insertAtHead(head,20);
    print(head);
    cout<<getLength(head)<<endl ;

    insertAtTail(tail,30);
    print(head);

    return 0;
}
