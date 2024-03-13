#include <iostream>

using namespace std;
const int N = 4;

int main()
{
    int a[N] = {1, 2, 3, 4};
    // cout << a[N]; in ra gia tri ngau nhien
    //for(int i = 2; i > -20; i--) cout << a[i] << " ";
    //cout << a[-1]; in ra gia tri ngau nhien
    a[-1] = 9;
    a[N] = 100;
    a[N+1] = 200;
    for(int i = -5; i < N+5; i++) cout << a[i] << " ";
    return 0;
}
