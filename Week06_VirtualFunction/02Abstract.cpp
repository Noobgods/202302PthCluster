#include <iostream>

using namespace std;

class Animal{
public:
    virtual void cry() =0;
};

class Dog : public Animal{
public:
    virtual void cry(){
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal{
public:
    virtual void cry(){
        cout << "Meow" << endl;
    }
};

int main(){
    //Animal mypet; // Error!

    Dog chiwawa;
    Cat sham;

    chiwawa.cry();
    sham.cry();

    Animal *mypet;

    mypet = &sham;

    mypet->cry();

    return 0;
}