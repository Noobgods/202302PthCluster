// Encoding : UTF-8
#include <iostream>
#include <string>

using namespace std;

// Struct 복사
class student{
public:
    void printInfo(){
        cout << "Student Info " << this->name << " / " << this->number << endl;
    }
    
public:
    string name;
    int number;

};

int main(){
    student pths;
    pths.name = "JunPark";
    pths.number = 11046;

    pths.printInfo();

    return 0;
}