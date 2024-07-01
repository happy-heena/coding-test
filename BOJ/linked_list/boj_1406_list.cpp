#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string init;
    cin >> init;

    list<char> L;
    for (auto c : init) L.push_back(c);
    auto cursor = L.end();

    int m;
    cin >> m;
    while(m--) {
        char x;
        cin >> x;
        
        if (x == 'P') {
            char y;
            cin >> y;
            L.insert(cursor, y) ;
        } else if (x == 'L') {
            if (cursor != L.begin()) cursor--;
        } else if (x == 'D') {
            if (cursor != L.end()) cursor++;
        } else {
            if (cursor != L.begin()) {
                cursor--;
                cursor = L.erase(cursor);
            }
        }
    }
    for (auto c : L) cout << c;
}