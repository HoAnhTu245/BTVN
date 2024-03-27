#include <iostream>

using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    char b[7] = "abcdef";
    for(int i = 0; i < 5; i++) cout << &a[i] << " "; // địa chỉ cách nhau 4 bit
    cout << endl;
    for(int i = 0; i < 8; i++) cout << (void*)&b[i] << " "; // địa chỉ cách nhau 1 bit
    cout << endl;
    a[6] = 6; a[7] = 7;
    cout << &a[6] << " " << &a[7]; //địa chỉ cách nhau 4 bit so với phần tử liền kề
    cout << "\n" << (void*)&b[7] << " " << b[7]; //địa chỉ cách nhau 4 bit so với phần tử liền kề (b[6])
    return 0;
}
