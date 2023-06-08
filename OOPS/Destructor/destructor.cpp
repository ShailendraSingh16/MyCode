#include<iostream>
using namespace std;

class Hero{
    
    private:
    int health;

    public:
    char *name;
    char level;

    Hero(){
        cout<<"Simple constructor is called"<<endl;
        name=new char[100];
    }

    // Parameterized constructor
    Hero(int health){
        this->health=health;
    }

    Hero(int health, char level){
        this->level=level;
        this->health=health;
    }

    // copy constructor
    Hero(Hero& temp){
        cout<<"Copy Constructor is called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }

    void print(){
        cout<<"name "<<this->name<<endl;
        cout<<"health "<<this->health<<endl;
        cout<<"level "<<this->level<<endl;
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

    //Destructor
    ~Hero(){
        cout<<"Destructor is called"<<endl;
    }

};

int main(){

    //Static
    Hero a;

    //Dynamically
    Hero *b=new Hero();
    // for dynamic object destructor is called manually
    delete b;

    return 0;
}
