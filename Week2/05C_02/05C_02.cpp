#include <bits/stdc++.h>

using namespace std;
string readUnderThousand(int n)
{
    map<int, string> word;
    word = {
        {1, "one"}, {2, "two"}, {3, "three"} , {4, "four"}, {5, "five"},
        {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}, {10, "ten"}, {11, "eleven"},
        {12, "twelve"}, {13, "thirteen"}, {14, "fourteen"}, {15, "fifteen"}, {16, "sixteen"},
        {17, "seventeen"}, {18, "eighteen"}, {19, "nineteen"}, {20, "twenty"}, {30, "thirty"},
        {40, "fourty"}, {50, "fifty"}, {60, "sixty"}, {70, "seventy"}, {80, "eighty"}, {90, "ninety"}
    };
    if(n < 20) return word[n];
    else if(n < 100) return word[n / 10 * 10] + " " + word[n % 10];
    else if(n < 1000) return readUnderThousand(n/100) + " hundred " + readUnderThousand(n%100);

}
string readOverThousand(int n)
{
    string result;
    if(n<0) return "negative " + readOverThousand(-n);
    if(n >= 1000000){
        result += readUnderThousand(n / 1000000) + " million ";
        n %= 1000000;
    }
    if(n >= 1000){
        result += readUnderThousand(n / 1000) + " thousand ";
        n %= 1000;
    }
    result += readUnderThousand(n);
    return result;
}

int main()
{
    int n; cin >> n;
    if(n == 0) cout << "zero";
    else{
        cout << readOverThousand(n);
    }
    return 0;
}
