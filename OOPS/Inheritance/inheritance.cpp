#include<iostream>
using namespace std;

class Human{

    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    int setWeight(int w){
        this->weight=w;
    }

};

class Male:public Human{

    public:
    string colour;

    void sleep(){
        cout<<"Male sleeping";
    }
};

int main(){
    Male object1;

    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;

    cout<<object1.age<<endl;
    

    return 0;
}
