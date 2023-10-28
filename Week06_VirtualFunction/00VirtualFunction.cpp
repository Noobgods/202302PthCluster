#include <iostream>

using namespace std;

class Animal{
public:
    virtual void cry(){     // 기초 클래스에서 선언된 cry() 함수
        cout << "None" << endl;
    }
};

class Dog : public Animal{
public:
    virtual void cry(){     // 파생 클래스에서 재정의한 cry() 함수
        cout << "Woof!" << endl;
    }
};

int main(){
    Animal animal;

    Dog chiwawa;

    animal.cry();
    chiwawa.cry();


    return 0;
}