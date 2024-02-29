#include <iostream>

using namespace std;
void xoay(int a[], int n)
{
    int tmp;
    tmp = a[0];
    for(int i=0; i<n; i++)
    {
        a[i] = a[i+1];
    }
    a[n-1] = tmp;
}
int main()
{
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        a[i] = i+1;
    }
    int t = n - 1;
    for(int i=0; i<n; i++) cout << a[i] << " ";
    cout << endl;
    while(t--)
    {
        xoay(a, n);
        for(int i=0; i<n; i++)
        {

            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
