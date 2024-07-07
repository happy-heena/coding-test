#include <bits/stdc++.h>
using namespace std;

int a[100005];
int n;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    int m;
    cin >> m;
    while(m--) {
        int t;
        cin >> t;
        cout << binary_search(a, a+n, t) << '\n'; // 범위는 반드시 오름차순으로 되어 있어야 한다
    }
}