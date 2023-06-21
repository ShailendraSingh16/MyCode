 #include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

    ~Node(){
        int value=this->data;

        if(next != NULL){
            delete next;
            next=NULL;
        }
    }
};

void print(Node* &head){
    Node* temp=head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

void insertAtHead(Node* &head, int d){

    if(head==NULL){
        Node* temp = new Node(d);
        head=temp;
    }

    Node* temp = new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){

    if(position==1){
        insertAtHead(head,d);
        return;
    }

    Node* temp=head;
    Node* nodeToInsert = new Node(d);

    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;

}

void deleteNode(Node* &tail, Node* &head, int position){

    if(position==1){
        Node* temp = head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }

    else{
        Node* curr=head;
        Node* prev=NULL;

        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }

        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;

    print(head);

    insertAtHead(head,11);
    print(head);

    insertAtTail(tail,12);
    insertAtTail(tail,13);
    insertAtTail(tail,14);
    print(head);

    insertAtPosition(tail,head,5,20);
    print(head);

    deleteNode(tail,head,3);
    print(head);

    return 0;
}
