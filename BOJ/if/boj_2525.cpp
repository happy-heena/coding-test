#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (b + c >= 60) {
        a = a + (b + c) / 60;
        b = (b + c) % 60;
        if (a >= 24) a -= 24;
    } else {
        b = b + c;
    }
    cout << a << ' ' << b;    
    return 0;
}