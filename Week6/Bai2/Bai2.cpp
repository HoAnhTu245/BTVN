#include <iostream>

using namespace std;

long long gt(int x)
{
    if(x == 1) return 1;
    else{
       cout << x << " "  << &x << endl;
       return x * gt(x - 1);

    }
}

int main()
{
    int
    for()
    int n; cin >> n;
    cout << gt(n);
    return 0;
}
