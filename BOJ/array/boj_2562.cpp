#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int max = INT_MIN, m;    
    for(int i = 1 ; i < 10 ; i ++) {
        cin >> n;
        if(n >= max) {
            max = n;
            m = i;
        }
    }
    cout << max << '\n' << m;
    return 0;
}