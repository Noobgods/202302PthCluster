#include <iostream>

using namespace std;

class Super{
public:
    virtual void func1();
    virtual void func2(int n);
    virtual void func3();
    virtual void func4() = 0;
};

class Sub : public Super{
public:
    virtual void func1(){
        cout << "function_1" << endl;
    }

    virtual void func2(){       // override 키워드가 없기 때문에 부모 클래스에 해당 함수가 존재하지 않음에도 에러 없음
        cout << "not function_2" << endl;
    }

    /*
    virtual void func2() override{    // override 키워드가 있음에도 부모클래스에 같은 형식의 함수가 없기 때문에 에러
        cout << "function_2" << endl;
    }
    */

    virtual void func2(int a) override{     // 정상적인 오버라이딩
        cout << "function_2" << endl;
    }

    void func3() override{      // override 키워드가 있으면 virtual 키워드 생략가능
        cout << "function_3" << endl;
    }

    void func4() override{      // 순수 가상함수 오버라이딩
        cout << "function_4" << endl;
    }
};

int main(){
    //Super super; //error!! 

    Sub sub;

    sub.func1();
    sub.func2(20);
    sub.func3();
    sub.func4();
    
    return 0;
}