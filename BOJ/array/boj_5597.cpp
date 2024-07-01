#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[31];
    for(int i = 1; i <= 30; i ++) a[i] = i;
    for(int i = 0; i < 28; i ++) {
        cin >> n;
        a[n] = 0;
    }
    for(int i = 1; i <= 30; i ++) {
        if(a[i] != 0) cout << a[i] << '\n';
    }
    return 0;
}