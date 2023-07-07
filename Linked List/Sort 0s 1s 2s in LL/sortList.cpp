#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

Node* sortList(Node* head){
    int zeroCount=0;
    int oneCount=0;
    int twoCount=0;

    Node* temp=head;
    while(temp != NULL){
        if(temp->data == 0)
        zeroCount++;
        else if(temp->data == 1)
        oneCount++;
        else
        twoCount++;

        temp=temp->next;
    }

    temp=head;
    while(temp != NULL){
        if(zeroCount != 0){
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp->data = 1;
            oneCount--;
        }
        else{
            temp->data=2;
            twoCount--;
        }
        temp=temp->next;
    }

    return head;
}

void insertAtTail(Node* &tail, int d){
    Node* nodeToInsert = new Node(d);

    tail->next=nodeToInsert;
    nodeToInsert->next=NULL;
    tail=nodeToInsert;
}

void print(Node* &head){
    Node* temp=head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

int main(){
    Node* node1 = new Node(1);
    Node* head=node1;
    Node* tail=node1;
   
   insertAtTail(tail,0);
   insertAtTail(tail,2);
   insertAtTail(tail,1);
   insertAtTail(tail,2);

   Node* t=sortList(head);
   print(t);

    return 0;
}
