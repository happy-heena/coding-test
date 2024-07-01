#include <bits/stdc++.h>
using namespace std;

int n, m;
int a, b;
int arr[100001];
int d[100001];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    d[0] = 0;
    for(int i = 1 ; i < n + 1 ; i++) {
        cin >> arr[i];
        d[i] = d[i-1] + arr[i];
    }

    for(int i = 0 ; i < m ; i++) {
        cin >> a >> b;
        cout << d[b] - d[a-1] << '\n';
    }
}