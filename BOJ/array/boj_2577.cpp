#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, n;
    int num[10] = {0};
    cin >> a >> b >> c;
    n = a * b * c;

    while(n) {
        num[n%10]++;
        n /= 10;
    }
    for(int i = 0 ; i < 10; i++) cout << num[i] << '\n';
}