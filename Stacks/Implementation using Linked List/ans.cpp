#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack
{
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    void push(int data)
    {

        Node *temp = new Node(data);

        if (!temp)
        {
            cout << "stack overflow" << endl;
            exit(1);
        }

        temp->data = data;
        temp->next = top;
        top = temp;
    }

    bool isEmpty()
    {

        return top == NULL;
    }

    int peek()
    {
        if (!isEmpty())
            return top->data;
        else
            exit(1);
    }

    void pop()
    {
        Node *temp;

        if (top == NULL)
        {
            cout << "stack underflow" << endl;
        }

        else
        {
            temp = top;

            top = top->next;

            free(temp);
        }
    }

    void display()
    {

        Node *temp;

        if (top == NULL)
        {
            cout << "stack underflow";
            exit(1);
        }
        else
        {
            temp = top;

            while (temp != NULL)
            {
                cout << temp->data;

                temp = temp->next;
                if (temp != NULL)
                    cout << " -> ";
            }
        }
    }
};

int main()
{
    Stack s;

    // Push the elements of stack
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);

    // Display stack elements
    s.display();

    // Print top element of stack
    cout << "\nTop element is " << s.peek() << endl;

    // Delete top elements of stack
    s.pop();
    s.pop();

    // Display stack elements
    s.display();

    // Print top element of stack
    cout << "\nTop element is " << s.peek() << endl;

    return 0;
}
