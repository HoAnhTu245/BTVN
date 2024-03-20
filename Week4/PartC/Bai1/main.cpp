#include <iostream>

using namespace std;
int b[10005];
int main()
{
    int n; cin >> n;
    int a[n + 5];
    int d = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        if(b[a[i]] == 0) b[a[i]] = 1;
        else{
            d = 1;
            break;
        }
    }
    if(d == 1) cout << "Yes";
    else cout << "No";
    return 0;
}
