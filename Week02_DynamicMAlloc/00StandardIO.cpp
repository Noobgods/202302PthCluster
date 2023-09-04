// Written with encoding UTF-8
#include <iostream>

using namespace std;

int main(){
    cout << "Hello world!" << endl;

    int number;
    // cin은 변수로 입력값을 넣어주기 때문에 >> 방향이 변수쪽
    // cout은 출력값을 함수로 넣어주기 때문에 << 방향이 함수쪽으로 이해하면 쉽다.
    cin >> number;
    cout << "Number : " << number << endl;

    return 0;
}