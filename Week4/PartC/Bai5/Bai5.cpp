#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y; cin >> x >> y;
    int a[x][y];
    int k = 1;
    int top = 0, under = x - 1, left = 0, right = y - 1;
    while(top <= under && left <= right)
    {
        for(int i = left; i <= right; i++) a[top][i] = k++;
        top++;
        for(int i = top; i <= under; i++) a[i][right] = k++;
        right--;
        for(int i = right; i >= left; i--) a[under][i] = k++;
        under--;
        for(int i = under; i >= top; i--) a[i][left] = k++;
        left++;
    }
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++) cout << a[i][j] << "\t";
        cout << endl;
    }
    return 0;
}
