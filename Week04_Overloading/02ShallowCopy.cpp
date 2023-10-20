// Encoding : UTF-8
#include <iostream>

using namespace std;

// class Object{
// public:
//     Object(int data){
//         this->data = new int(data);
//     }

//     ~Object(){
//         delete data;
//     }

//     프로퍼티
//     int getData(){
//         return *data;
//     }
    
//     void setData(int data){
//         *(this->data) = data;
//     }
    
// private:
//     int* data;
// };

class Object{
public:
    Object(int data){
        this->data = new int(data);
    }
    
    ~Object(){
        cout << "call destructor" << endl;
        delete data;
        cout << "end Destructor" << endl;
    }
    
    int* data;
};
int main(){
    Object obj(10);
    Object clone = obj;

    *(obj.data) = 3;

    cout << "Object Data : " << *(obj.data) << endl;
    cout << "Copy Data : " << *(clone.data) << endl;

    return 0;
}