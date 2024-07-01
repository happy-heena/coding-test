#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    stack<int> S;

    int n;
    cin >> n;

    while(n--) {
        string x;
        cin >> x;

        if (x == "push") {
            int y;
            cin >> y;
            S.push(y);
        } else if (x == "pop") {
            if (S.empty()) cout << -1 << '\n';
            else {
                cout << S.top() << '\n';
                S.pop();
            }
        } else if (x == "size") {
            cout << S.size() << '\n';
        } else if (x == "empty") {
            if (S.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        } else if (x == "top") {
            if (S.empty()) cout << -1 << '\n';
            else cout << S.top() << '\n';
        }
    }
}