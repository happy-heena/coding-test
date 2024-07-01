#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    char b;
    cin >> a;

    if (a >= 90 && a <= 100) b = 'A';
    else if (a >= 80) b = 'B';
    else if (a >= 70) b = 'C';
    else if (a >= 60) b = 'D';
    else b = 'F';
    cout << b;
    return 0;
}