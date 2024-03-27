#include <iostream>
using namespace std;
void print(int x, int y) // x, y và a, b là 2 biến có địa chỉ khác nhau; x và y chỉ sao chép giá trị của a, b
{
    cout << x << " " << y << endl;
    cout << &x << " " << &y;
}
void print2(int &x, int &y) // x và a thực chất chính là 1 biến
{7
    cout << x << " " << y << endl;
    cout << &x << " " << &y;
}
int main()
{
    int a, b; cin >> a >> b;
    print2(a, b);
    cout << endl << &a << " " << &b;
    return 0;
}