#include <bits/stdc++.h>
using namespace std;

int main() {
    double avg = 0, n, m, max = INT_MIN, a[1001];
    cin >> n;
    for(int i = 0 ; i < n; i ++) {
        cin >> a[i];
        if (a[i] >= max) max = a[i];
    }
    for(int i = 0 ; i < n; i ++) {
        avg = avg + (a[i] / max * 100);
    }
    cout << avg / n;
    return 0;
}