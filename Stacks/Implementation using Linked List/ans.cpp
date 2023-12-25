#include<iostream>
using namespace std;

class Node{
     
     public:
     int data;
     Node* next;

     Node(int data){
        this->data=data;
        this->next=NULL;
     }
};

class Stack{
    Node* top;
    
    public:

    Stack(){
        top=NULL;
    }

    void push(int data){

        Node* temp = new Node(data);

        if(!temp){
            cout<<"stack overflow"<<endl;
            return;
        }

        temp->data=data;
        temp->next=top;
        top=temp;
    }

    bool isEmpty(){

        return top == NULL;
    }

    int peek(){

        if(!isEmpty()){
            return top->data;
        }
        return -1;
    }

    void pop(){
        Node *temp=top;

        if(top == NULL){
            cout<<"stack underflow"<<endl;
            return;
        }

        top=top->next;
        free(temp);
    }

    void print(){

        Node* temp;

        if(top == NULL){
            cout<<"stack underflow"<<endl;
            return;
        }

        temp=top;

        while(temp != NULL){
            cout<<temp->data;

            temp=temp->next;

            if(temp != NULL){
                cout<<" -> ";
            }
        }
    }
    
};

int main(){

    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<s.peek()<<endl;

    s.pop();

    cout<<s.peek()<<endl;

    s.print();



    return 0;
}
