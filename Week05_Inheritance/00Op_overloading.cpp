// Encoding : UTF-8
#include <iostream>

using namespace std;

class Object{
public:
    Object(){}
    Object(int num_1, int num_2)
     : num_1(num_1), num_2(num_2) {}

    Object operator+(Object &ref){
        return Object(this->num_1 + ref.num_1, this->num_2 + ref.num_2);
    }

    Object operator++(){    // 전위 연산자
        num_1 += 1;
        num_2 += 1;
        return *this;
    }

    Object operator++(int){     // 후위 연산자
        Object temp(*this);
        num_1 += 1;
        num_2 += 1;
        return temp;
    }

    bool operator>(Object& ref){
        return this->num_1 + this->num_2 > ref.num_1 + ref.num_2 ? 1 : 0;
    }

    bool operator<(Object& ref){
        return this->num_1 + this->num_2 < ref.num_1 + ref.num_2 ? 1 : 0;
    }
    
    bool operator>=(Object& ref){
        return this->num_1 + this->num_2 >= ref.num_1 + ref.num_2 ? 1 : 0;
    }

    bool operator<=(Object& ref){
        return this->num_1 + this->num_2 <= ref.num_1 + ref.num_2 ? 1 : 0;
    }

    void printData(){
        cout << "num 1 : " << num_1 << ", num 2 : " << num_2 << endl; 
    }

    int num_1;
    int num_2;
};

int main(){
    Object obj1(1, 2);
    Object obj2(3, 10);

    Object obj3;

    obj3 = obj1 + obj2;

    obj1.printData();
    obj2.printData();
    obj3.printData();

    return 0;
}