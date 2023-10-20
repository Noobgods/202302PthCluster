// Encoding : UTF-8
#include <iostream>
using namespace std;

void function(int x){
    cout << "function "<< "(" <<  x << ")"<< endl;
}

void function(int x, int y){
    cout << "function " << "(" << x << ", " << y << ")" << endl;
}

int main(){
    function(6);
    function(7, 2);
    
    return 0;
}