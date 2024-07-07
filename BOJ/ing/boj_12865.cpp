#include <bits/stdc++.h>
using namespace std;
// hint dp
int n, k;
int weight, value;
vector<pair<int, int>> w;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    for(int i = 0 ; i < n ; i++) {
        int x, y;
        cin >> x >> y;
        w.push_back({ x, y });
    }
    sort(w.begin(), w.end());

    for(int i = 0 ; i < n ; i++) {
        if (weight >= k) break;
        weight += w[i].first;
        value += w[i].second;
    }
    cout << value;
}