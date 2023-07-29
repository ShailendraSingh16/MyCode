#include<iostream>
#include<stack>
using namespace std;

class Stack{
    //proprties
    public:
    int *arr;
    int top;
    int size;

    //behaviour
    Stack(int size){
        this->size=size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"stack is empty";
        }
    }

    bool isEmpty(){
        if(top== -1){
            return true;
        }
        return false;
    }

};

int main(){

    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);

    cout<<st.peek();

    return 0;
}
