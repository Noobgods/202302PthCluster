// Written with encoding UTF-8
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "배열의 범위 입력 : ";
    cin >> n;

    int* ptr;
    ptr = new int[n];

    for(int i = 0; i<n; i++)
    {
        cout << "Ptr " << i+1  << " : ";
        cin >> ptr[i];
    }

    for(int i = 0; i<n; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;

    delete[] ptr;

    return 0;
}