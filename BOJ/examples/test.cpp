#include <iostream>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std:cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n ; i ++) {
        cin >> a[i];
        if (a[i] < x) {
            cout << a[i] << ' ';
        }
    }
    return 0;
}