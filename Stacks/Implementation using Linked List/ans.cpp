#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

 Node* newNode(int data){
    Node* node = new Node();
    node->data=data;
    node->next=NULL;

    return node;
 }

 int isEmpty(Node* root){
    return !root;
 }

 void push(Node** root, int data){
    Node* node = newNode(data);
    node->next=*root;
    *root=node;
 }

 int pop(Node** root){

    if(isEmpty(*root))
    return INT_MIN;

    Node* temp = *root;
    *root = (*root)->next;
    int popped=temp->data;
    free(temp);

    return popped;
 }

 int peek( Node* root)
{
    if (isEmpty(root))
        return INT_MIN;
    return root->data;
}

int main(){

     Node* root = NULL;
  
    push(&root, 10);
    push(&root, 20);
    push(&root, 30);

    
    cout << pop(&root) << " popped from stack\n";
  
    cout << "Top element is " << peek(root) << endl;
      
    cout <<"Elements present in stack : ";
     //print all elements in stack :
    while(!isEmpty(root))
    {
        // print top element in stack
        cout << peek(root) <<" ";
        // remove top element in stack
        pop(&root);
    }
    return 0;
}
