#include <bits/stdc++.h>

using namespace std;
struct point
{
    double x, y;
    void Add()
    {
        cin >> x >> y;
    }
    void Return()
    {
        cout << x << " " << y;
    }
};
point mid_point(point p1, point p2)
{
    point p;
    p.x = (p1.x + p2.x) / 2;
    p.y = (p1.y + p2.y) / 2;
    return p;
}
int main()
{
    point p1, p2;
    p1.Add();
    p2.Add();
    mid_point(p1, p2).Return();
    return 0;
}
