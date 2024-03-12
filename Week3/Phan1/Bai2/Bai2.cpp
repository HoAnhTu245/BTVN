#include <bits/stdc++.h>

using namespace std;
struct Point
{
    int x, y;
    void Add(Point p1)
    {
        p1.x += x;
        p1.y += y;
    }
    void Add2(Point& p1)
    {
        p1.x *= x;
        p1.y *= y;
    }
};
int main()
{
    Point p; cin >> p.x >> p.y;
    Point p1;
    p1.x = 3;
    p1.y = 4;
    p.Add2(p1);
    cout << p1.x << " " << p1.y;
    return 0;
}
