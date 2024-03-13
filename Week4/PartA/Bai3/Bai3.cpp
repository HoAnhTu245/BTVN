#include <iostream>

using namespace std;

int main()
{
    int daytab[2][12] = {
        {31,28,31,30,31,30,31,31,30,1,2,3},
        {31,29,31,30,31,30,31,31,30,3,4,5}
    };  // hieu qua hon vi co the phan tach duoc cac hang
    int Daytab[2][12] = {
        31,28,31,30,31,30,31,31,30,1,2,3,
        31,29,31,30,31,30,31,31,30,3,4,5
    };
    int i=0;
    while(i < 2)
    {
        for(int j = 0; j < 12; j++){
            cout << daytab[i][j] << " ";
        }
        cout << endl;
        i++;
    }
    return 0;
}
