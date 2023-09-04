// Written with encoding UTF-8
#include <iostream>
#include <string>

using namespace std;

class student{
public:
    student(string name, int number){
        this->name = name;
        this->number = number;
    }

public:
    void printInfo(){
        cout << "Student Info " << this->name << " / " << this->number << endl;
    }
    
public:
    string name;
    int number;

};

int main(){
    student pths("JunPark", 11046);

    pths.printInfo();

    return 0;
}