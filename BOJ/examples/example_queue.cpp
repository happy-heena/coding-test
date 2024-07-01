#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int head = 0, tail = 0;

void push(int x) {
    dat[tail++] = x;
}

void pop() {
    head++;
}

int front() {
    return dat[head];
}

int back() {
    return dat[tail-1];
}

int main() {
    queue<int> Q;

    Q.push(10); // 10
    Q.push(20); // 20
    Q.push(30); // 30

    cout << Q.size() << '\n'; // 3

    if(Q.empty()) cout << "Q is empty\n";
    else cout << "Q is not empty\n";

    Q.pop(); // 20 30

    cout << Q.front() << '\n';
    cout << Q.back() << '\n';

    Q.push(40); // 20 30 40   
    Q.pop(); // 30 40

    cout << Q.front() << '\n';  // 30
}