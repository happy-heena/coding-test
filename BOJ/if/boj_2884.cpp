#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, m;
    cin >> h >> m;
    // if (m - 45 < 0) {
    //     m = 60 + (m - 45);
    //     h -= 1;
    //     if (h < 0) h = 24 + h;
    // } else {
    //     m = m - 45;
    // }
    // cout << h << ' ' << m;
    
    if (m < 45) {
        if (h == 0) {
            cout << 23 << ' ' << (60 + m) - 45;
        } else {
            cout << h -1 << ' ' << (60 + m) - 45;
        }
    } else {
        cout << h << ' ' << m - 45;
    }
    return 0;
}