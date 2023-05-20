#include<iostream>
using namespace std;

class Hero{
    
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

    int getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(char ch){
        level=ch;
    }

};

int main(){
    
    // static allocation
    Hero a;
    cout<<"Level is "<<a.level<<endl;
    cout<<"Health is "<<a.getHealth()<<endl;

    // dynamic allocation
    Hero *b=new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout<<"Level is "<<b->level<<endl;
    cout<<"Health is "<<b->getHealth()<<endl;


    /*
    Hero ramesh;

    cout<<"Ramesh health: "<<ramesh.getHealth()<<endl;
    ramesh.level='A';

    cout<<"Health is: "<ramesh.getHealth()<<endl;
    cout<<"Level is: "<<ramesh.level<<endl;
    */
    return 0;
}
