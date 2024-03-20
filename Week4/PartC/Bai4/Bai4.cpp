#include <bits/stdc++.h>

using namespace std;
const int N = 100;
void Find_(char a[100][100], int n, int m)
{
    int k = 0;
    for(int i = n - 1; i <= n+1; i++)
    {
        if(i == n || i < 0) continue;
        else{
            for(int j = m - 1; j <= m+1; j++)
            {
                if(j == m || j < 0) continue;
                else{
                    if(a[i][j] == '*') k++;
                }
            }
            cout << k << " ";
        }
    }
}
int main()
{
    int n, m; cin >> n >> m;
    char a[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++) cin >> a[i][j];
    }
    /*for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++) cout << a[i][j] << " ";
        cout << endl;
    }*/
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == '*') cout << a[i][j] << " ";
            else{
                int k = 0;
                for(int u = i - 1; u <= i + 1; u++){
                    for(int e = j - 1; e <= j + 1; e++){
                        if((u != i || e != j) && (u >= 0 && u < n) && (e >= 0 && e < m)){
                            if(a[u][e] == '*') k++;
                        }
                    }
                }
                cout << k << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
