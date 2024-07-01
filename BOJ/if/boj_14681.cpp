#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b;
    
    if (a > 0 && b > 0) c = 1;
    else if (a < 0 && b > 0) c = 2;
    else if (a < 0 && b < 0) c = 3;
    else if (a > 0 && b < 0) c = 4;

    cout << c;
    return 0;
}