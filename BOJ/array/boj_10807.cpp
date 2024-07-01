#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, v, count = 0;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i ++) {
        cin >> a[i];
    }
    cin >> v;
    for(int i = 0 ; i < n ; i ++) {
        if (a[i] == v) count++;
    }
    cout << count;
    return 0;
}