// Encoding : UTF-8
#include <iostream>
using namespace std;

class Parent{
public:
    void pInfo(){
        cout << "Parent" << endl;
    }

    int p_data;
};

class Child : public Parent{
public:
    void cInfo(){
        cout << "child" << endl;
    }

    int c_data;
};

int main(){
    Parent parent;
    Child child;
    
    child.pInfo();
    child.cInfo();
    child.p_data = 4;
    child.c_data = 8;

    parent.pInfo();
    //parent.cInfo();  // Error!
    parent.p_data = 7;
    //parent.c_data = 3; // Error!

    return 0;
}