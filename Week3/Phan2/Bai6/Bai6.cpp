#include <bits/stdc++.h>

using namespace std;
struct Rect
{
    double x, y, w, h;
};
struct Ship
{
    Rect p;
    string id;
    double dx, dy;
    void In()
    {
        cin >> p.x >> p.y >> id >> dx >> dy;
    }
    void move()
    {
        p.x += dx;
        p.y += dy;
    }
};
void display( Ship& ship)
{
    cout << ship.id << endl;
    cout << ship.p.x << " " << ship.p.y << endl;
}
int main()
{
    Ship s1, s2;
    Rect p;
    s1.In(); s2.In();
    int t;
    while(t < 5)
    {
        s1.move(); s2.move();
        display(s1);
        display(s2);
        t++;
    }
    return 0;
}
