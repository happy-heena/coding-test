#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, i, j, tmp;
    cin >> n >> m;
    int a[n];
    for(int x = 1; x <= n; x++) a[x] = x;
    while(m--) {
        cin >> i >> j;
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
    for(int x = 1 ; x <= n; x++) cout << a[x] << ' ';
    return 0;
}