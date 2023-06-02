#include<iostream>
using namespace std;

class Hero{
    
    // properties
    private:
    int health;

    public:
    char level;

    void print(){
        cout<<level<<endl;
    }

};

int main(){

    Hero ramesh;

    ramesh.health=70;
    ramesh.level='A';

    cout<<"Health is: "<<ramesh.health<<endl;
    cout<<"Level is: "<<ramesh.level<<endl; 


    return 0;
}
