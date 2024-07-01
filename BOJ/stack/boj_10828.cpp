#include <bits/stdc++.h>
using namespace std;

const int MX = 100001;
int dat[MX];
int pos = 0;

void push(int x) {
    dat[pos++] = x;
}

void pop() {
    pos--;
}

void size() {
    cout << pos << '\n';
}

int empty() {
    if (pos == 0) return 1;
    else return 0;
}

void top() {
    cout << dat[pos - 1] << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    fill(dat, dat+MX, -1);
    int n;
    cin >> n;

    while(n--) {
        string a;
        cin >> a;

        if(a == "push") {
            int b;
            cin >> b;
            push(b);
        } else if (a == "pop") {
            if (empty()) cout << -1 << '\n';
            else {
                top();
                pop();
            }
        } else if (a == "size") {
            size();
        } else if (a == "empty") {
            cout << empty() << '\n';
        } else if (a == "top") {
            if (empty()) cout << -1 << '\n';
            else top();
        }
    }
}