#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
char dat[MX];
int pre[MX], nxt[MX];
int unused = 1;
int cursor = 0;

void insert (int addr, char c) {
    dat[unused] = c;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];

    if(nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr) {
    nxt[pre[addr]] = nxt[addr];
    if(nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

void traverse() {
    int cur = nxt[0];
    while(cur != -1) {
        cout << dat[cur];
        cur = nxt[cur];
    }
} 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    fill(pre, pre+MX, -1);
    fill(nxt, nxt+MX, -1);
    
    string init;
    int m;
    char x, y;

    cin >> init;
    for(auto c : init) {
        insert(cursor, c);
        cursor++;
    }

    cin >> m;
    for(int i = 0 ; i < m ; i ++) {
        cin >> x;
        
        if (x == 'L') {
            if(pre[cursor] != -1) cursor = pre[cursor];
        } else if (x == 'D') {
            if(nxt[cursor] != -1) cursor = nxt[cursor];
        } else if (x == 'B') {
            if (cursor != 0) {
                erase(cursor);
                cursor = pre[cursor];
            }
        } else if (x == 'P') {
            cin >> y;
            insert(cursor, y);
            cursor = nxt[cursor];
        }
    }

    traverse();
}