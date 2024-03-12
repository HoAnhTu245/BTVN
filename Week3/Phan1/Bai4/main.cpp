#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct student
{
    int age;
    string first_name;
    string last_name;
    int standard;
    void get_in()
    {
        cin >> age >> first_name >> last_name >> standard;
    }
    void print()
    {
        cout << age << " " << first_name << " " << last_name << " " << standard;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    student x;
    x.get_in();
    x.print();
    return 0;
}
