#include <iostream>

using namespace std;

int main()
{
    int pre_num, current_num;
    cin >> current_num;
    cout << current_num;
    pre_num = current_num;
    while(current_num > 0)
    {
        cin >> current_num;
        if(current_num != pre_num){
            cout << current_num << " ";
            pre_num = current_num;
        }

    }
    return 0;
}
