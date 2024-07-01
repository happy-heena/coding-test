#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c && a == c) {
        cout << 10000 + a * 1000;
    } else if (a != b && b != c && a != c) {
        int max;
        
        if (a <= b) max = b;
        else max = a;

        if (max <= c) max = c;
        
        cout << max * 100;
    } else {
        int same;
        if (a == b) cout << 1000 + a * 100;
        else if (b == c) cout << 1000 + b * 100;
        else cout << 1000 + a * 100;
    }

    return 0;
}