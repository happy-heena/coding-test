#include <bits/stdc++.h>
using namespace std;

void empty() {
    cout << -1 << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    queue<int> Q;

    int n;
    cin >> n;
    while(n--) {
        string a;
        cin >> a;

        if (a == "push") {
            int b;
            cin >> b;
            Q.push(b);
        } else if (a == "pop") {
            if (Q.empty()) empty();
            else {
                cout << Q.front() << '\n';
                Q.pop();
            }
        } else if (a == "size") {
            cout << Q.size() << '\n';
        } else if (a == "empty") {
            if (Q.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        } else if (a == "front") {
            if (Q.empty()) empty();
            else cout << Q.front() << '\n';
        } else if (a == "back") {
            if (Q.empty()) empty();
            else cout << Q.back() << '\n';
        }
    }
}