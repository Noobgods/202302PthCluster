// Encoding : UTF-8
#include <iostream>

using namespace std;

class Object{
public:
    Object(int num){
        data = num; 
    };  
    /*
    Object(int data){
        this->data = data;
    }
    */

    /*
    Object(int data)
        : data(data) {}
    */
   
    int getData(){
        return data;    // this가 생략되어 있음
    }
    
    // 외부 함수/변수와의 구분을 위해 this를 명시적으로 사용하기도 함 

private:
    int data;
};

int main(){
    Object obj(10);

    cout << obj.getData() << endl;
    
    return 0;
}