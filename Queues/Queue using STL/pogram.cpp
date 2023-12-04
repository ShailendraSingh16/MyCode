#include<iostream>
#include<queue>
using namespace std;

int main(){

    //create a queue
    queue<int>q;

    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);

    cout<<"size of queue is: "<<q.size()<<endl;
    cout<<"front of queue is: "<<q.front()<<endl;

    q.pop();

    cout<<"size of queue is: "<<q.size()<<endl;
    cout<<"front of queue is: "<<q.front()<<endl;

    return 0;
}
