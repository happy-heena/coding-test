#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    
    int a[n], b[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i] >> b[i];
    }
    int sum = 0;
    for(int i = 0 ; i < n ; i ++) {
        sum = sum + (a[i] * b[i]);
    }

    if (x == sum) cout << "Yes";
    else cout << "No";
    return 0;
}