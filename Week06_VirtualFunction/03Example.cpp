#include <iostream>
#include <string>

using namespace std;

class Animal{
public:
    Animal(string name) : petName(name){};
    virtual string cry(){return "";}

    string petName;
    string petType;
};

class Dog : public Animal{
public:
    Dog(string name) : Animal(name){
        this->petType = "Dog";
    }
    virtual string cry(){
        return "Woof!";
    }
};

class Cat : public Animal{
public:
    Cat(string name) : Animal(name){
        this->petType = "Cat";
    }
    virtual string cry(){
        return "Meow";
    }
};

int main(){
    Animal* my_pet;
    
    while(1){    
        string pet_type;
        cout << "What type of my pet is it? (Dog or Cat): ";
        cin >> pet_type;

        if(pet_type != "Dog" && pet_type != "Cat"){
            cout << "Wrong type!" << endl;
            continue;
        }

        string pet_name;
        cout << "Please choose a name for your pet : ";
        cin >> pet_name;

        if(pet_type == "Dog"){
            my_pet = new Dog(pet_name);
        }
        else if(pet_type == "Cat"){
            my_pet = new Cat(pet_name);
        }

        cout << "::::: Pet Data :::::" << endl;
        cout << " Type : " << pet_type << endl;
        cout << " Name : " << pet_name << endl;
        cout << " Crying Sound : " << my_pet->cry() << endl; 
        
        break;
    }
    
    delete my_pet;
    return 0;
}