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

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(char c){
        level=c;
    }
};

int main(){

    Hero ramesh;

  //  ramesh.health=70;
    ramesh.level='A';

    cout<<"Ramesh health is: "<<ramesh.getHealth()<<endl;

  //  cout<<"Health is: "<<ramesh.health<<endl;
    cout<<"Level is: "<<ramesh.level<<endl; 


    return 0;
}
