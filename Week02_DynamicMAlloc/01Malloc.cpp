// Written with encoding UTF-8
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int *ptr;
    //ptr = (int*)malloc(sizeof(int));
    ptr = (int*)calloc(1, sizeof(int));

    free(ptr);

    return 0;
}