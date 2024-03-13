#include <iostream>
using namespace std;

int main()
{
    int a[3][4] = {
        {1,2,3},
        {5,6,7},
        {9,8,7},
    }; // khi ghi tràn thì sẽ báo lỗi
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
