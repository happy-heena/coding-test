#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, tmp, i, j;
    cin >> n >> m;
    int a[n + 1];
    for(int x = 1; x <= n; x ++) a[x] = x;
    while(m--) {
        cin >> i >> j;
        
        for(int x = i, y = j; x < i + ((j - i + 1) / 2); x++, y--) {
            tmp = a[x];
            a[x] = a[y];
            a[y] = tmp;
        }
    }
    for(int c = 1; c <= n ; c++) cout << a[c] << ' ';
    return 0;
}