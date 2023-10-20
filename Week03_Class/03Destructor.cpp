// Encoding : UTF-8
#include <iostream>
#include <string>

using namespace std;

class student{
public:
    student(string name, int number){
        this->name = name;
        this->number = number;
    }
    ~student(){
        cout << "Class has been removed" << endl;
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
    student* pths = new student("JunPark", 11046);

    pths->printInfo();

    delete pths;

    cout << "Program exit." << endl;
    return 0;
}