#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int c = a * ((b % 100) % 10);
    int d = a * ((b % 100) / 10);
    int e = a * (b / 100);

    cout << c << '\n';
    cout << d << '\n';
    cout << e << '\n';
    cout << c + (d * 10) + (e * 100);

    // int x = (b / 100); // 3
    // int y = (b - (x * 100)) / 10; // 8
    // int z = (b - ((x * 100) + (y * 10))); // 5
    // int line1 = a * z;
    // int line2 = a * y;
    // int line3 = a * x;
    // int result = line1 + line2 * 10 + line3 * 100;

    // cout << line1 << endl;
    // cout << line2 << endl;
    // cout << line3 << endl;
    // cout << result << endl;

    return 0;
}