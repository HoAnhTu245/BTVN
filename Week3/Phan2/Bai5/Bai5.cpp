#include <bits/stdc++.h>

using namespace std;
struct Point
{
    double x, y;
    void Nhap()
    {
        cin >> x >> y;
    }
};
struct Rect
{
    double x, y, w, h;
    void Cin()
    {
        cin >> x >> y >> w >> h;
    }
    bool contains(Point p) const
    {
        if((p.x > x+w) || (p.y > y+h)) return false;
        return true;
    }
};
int main()
{
    Rect a1;
    a1.Cin();
    Point p1;
    p1.Nhap();
    cout << boolalpha << a1.contains(p1);
    return 0;
}
