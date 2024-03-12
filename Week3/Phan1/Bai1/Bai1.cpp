#include <bits/stdc++.h>

using namespace std;
struct Point
{
    int x, y;
    void Cin()
    {
        cin >> x >> y;
    }
};
void print(Point p)
{
    cout << p.x << " " << p.y;
}
int main()
{
    Point p;
    p.Cin();
    print(p);
    return 0;
}
