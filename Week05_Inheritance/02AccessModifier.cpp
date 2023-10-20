// Encoding : UTF-8
#include <iostream>
#include <string>

using namespace std;

class Parent{
public:
    int p_public_data;

protected:
    int p_protected_data;

private:
    int p_private_data;
    
};

class Child : public Parent{
public:
    void setData(){
        p_public_data = 3;
        c_public_data = 7;

        p_protected_data = 6;
        c_protected_data = 4;

        //p_private_data = 1;
        c_private_data = 3;
    }

public:
    int c_public_data;

protected:
    int c_protected_data;

private:
    int c_private_data;
};

class Other{
public:
    void setData(){
        Child child;
        child.p_public_data = 3;
        child.c_public_data = 7;

        //child.p_protected_data = 6;
        //child.c_protected_data = 4;

        //child.p_private_data = 1;
        //child.c_private_data = 3
    }
    
public:
    int c_public_data;

protected:
    int c_protected_data;

private:
    int c_private_data;
};

int main(){
    Child c;
    Other o;

    c.setData();
    o.setData();

    return 0;
}