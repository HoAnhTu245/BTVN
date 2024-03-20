#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int d = 0;
    for(int i = 0; i < n/2; i++)
    {
        if(s[i] != s[n - 1 - i]){
            cout << "No";
            d = 1;
            break;
        }
    }
    if(d == 0) cout << "Yes";
    return 0;
}
