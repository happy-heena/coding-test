#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, i, j, k, a[100] = {};
    scanf("%d %d", &n, &m);
    while(m--) {
        scanf("%d %d %d", &i, &j, &k);
        for(int x = i; x <= j ; x++) a[x] = k;
    }
    for(int x = 1; x <= n; x ++) printf("%d ", a[x]);
    return 0;
}