// Encoding : UTF-8
#include <iostream>

using namespace std;


int addInteger(int x, int y){
    return x + y;
}

float addFloat(float x, float y){
    return x + y;
}

int add(int x, int y){
    return x + y;
}

float add(float x, float y){
    return x + y;
}

int main(){
    int n1, n2;
    float d1, d2;

    cout << "enter two numbers : ";
    cin >> n1 >> n2;

    cout << "enter two numbers with floating points : ";
    cin >> d1 >> d2;

    cout << "add numbers = " << addInteger(n1, n2) << endl;
    cout << "add numbers = " << addFloat(d1, d2) << endl;

    cout << "add numbers = " << add(n1, n2) << endl;
    cout << "add numbers = " << add(d1, d2) << endl;

    return 0;
}