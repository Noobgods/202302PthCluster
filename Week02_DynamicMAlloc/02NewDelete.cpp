// Written with encoding UTF-8
#include <iostream>

using namespace std;

int main(){
    int *ptr;

    // ptr = (int*)malloc(sizeof(int));
    ptr = new int;

    // free(ptr);
    delete ptr;

    return 0;
}