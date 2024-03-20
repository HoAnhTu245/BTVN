#include <bits/stdc++.h>

using namespace std;
bool check(int n)
{
    int t = n;
    int k = 0;
    while(n > 0)
    {
        k = k* 10 + n % 10;
        n /= 10;
    }
    if(k != t) return false;
    else return true;
}
int main()
{
    int t; cin >> t;

    while(t--)
    {
        int d = 0;
        int a, b; cin >> a >> b;
        for(int i = a; i <= b; i++) {
            if(check(i)) d++;
        }
        cout << d << endl;
    }
    return 0;
}
