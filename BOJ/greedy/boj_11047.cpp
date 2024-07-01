#include <bits/stdc++.h>
using namespace std;

int n, k, a, cnt;
vector<int> m;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;

    for(int i = 0 ; i < n ; i ++) {
        cin >> a;
        m.push_back(a);
    }

    while(k > 0) {
        if (k / m.back() > 0) {
            cnt += k / m.back();
            k %= m.back();
        }
        m.pop_back();
    }
    cout << cnt;
}