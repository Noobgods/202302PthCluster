// Encoding : UTF-8
#include <iostream>
#include <string>

using namespace std;

struct student{
    string name;
    int number;

};

int main(){
    student pths;
    pths.name = "JunPark";
    pths.number = 11046;

    cout << "Student Info " << pths.name << " / " << pths.number << endl;

    return 0;
}