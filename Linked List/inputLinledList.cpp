#include<iostream>
using namespce std;

int main(){
int a;
    Node* head=NULL;
    Node* curr=NULL;

    while(cin>>a){
        Node* node1 = new Node(a);

        if(head==NULL){
            head=node1;
            curr=node1;
        }
        else{
            curr->next=node1;
            curr=node1;
        }
    }

    print(head);

    return 0;
}
