#include <iostream>

using namespace std;
const int N = 3;
//int a[N];   : các phần tử trong mảng có giá trị là 0
//int a[N]={1, 2, 3, 4};   : dù khai báo ngoài hay trong main thì là như nhau
//int a[]={1, 2, 3, 4};    dù khai báo ngoài hay trong main thì là như nhau
int main()
{
    int a[]={1, 2, 3, 4};
    //int a[N];   : các phần tử có giá trị ngẫu nhiên
    //int a[N]={1, 2, 3, 4};
    for(int it : a) cout << it << " ";
    return 0;
}
