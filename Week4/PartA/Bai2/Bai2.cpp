#include <iostream>
#include <cstring>

using namespace std;
const int N = 20;
//char c[N]; ki tu la rong
//char c[N] = "abcd";    khi N <= 4 thi mang bi tran
//char c[] = "abcd";
int main()
{
    char c[N] = "abcd";
    //char c[N] = "abcd";
    //char c[N];
    string s = c;
    s += "mnpq";
    cout << c << " " << sizeof(c) << endl << endl;
    cout << s;
    return 0;
}
