#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a[10] = {}, max = INT_MIN;
    cin >> n;
    while(n) {
        a[n%10]++;
        n/=10;
    }
    a[6] = (a[6] + a[9] + 1) / 2;
    a[9] = 0;
    for(int i = 0; i < 10; i ++) max = a[i] >= max ? a[i] : max;
    cout << max;
    return 0;
}