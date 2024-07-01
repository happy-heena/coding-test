#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> DQ;
    int n;

    cin >> n;

    while(n--) {
        string x;
        int y;
        
        cin >> x;

        if(x == "push_back") {
            cin >> y;
            DQ.push_back(y);
        } else if (x == "push_front") {
            cin >> y;
            DQ.push_front(y);
        } else if(x == "front") {
            if (DQ.empty()) cout << -1 << '\n';
            else cout << DQ.front() << '\n';
        } else if (x == "back") {
            if (DQ.empty()) cout << -1 << '\n';
            else cout << DQ.back() << '\n';
        } else if(x == "size") {
            cout << DQ.size() << '\n';
        } else if(x == "pop_front") {
            if (DQ.empty()) cout << -1 << '\n';
            else {
                cout << DQ.front() << '\n';
                DQ.pop_front();
            }
        } else if(x == "pop_back") {
            if (DQ.empty()) cout << -1 << '\n';
            else {
                cout << DQ.back() << '\n';
                DQ.pop_back();
            }
        } else if (x == "empty") {
            if (DQ.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
    }
}