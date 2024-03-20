#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main(){
    int P[35];
    int N = 30;
    int a = 1, b = 100;
    srand(time(NULL));
    for(int i = 0; i < N; i++){
        // (1)
        int num = rand() % (b - a + 1) + a;
        P[i] = num;
    }
    for(int i = 0; i < 29; i++) cout << P[i] << " "; // (2)
    cout << endl;
    for(int i = N - 1; i >= 0; i--){
        bool swapped = false;
        for(int j = 0; j < i; j++)
        {
            if(P[j] > P[j + 1]) {
                swap(P[j], P[j + 1]); // (3)
                swapped = true;
            }
        }
        if(swapped == false) break;
    }
    for(int i = 0; i < 29; i++) cout << P[i] << " "; // (4)
    return 0;
}
