#include <bits/stdc++.h>
using namespace std;

int n, cnt = 1, maxcnt = 0;
long long arr[1000001], maxval = -(1ll << 62) - 1; // int를 long long으로 형변환하지 않고 1 << 62로 작성시 int overflow 발생

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    for(int i = 1 ; i < n ; i++) {
        if (arr[i] == arr[i-1]) {
            cnt++;
        } else {
            if (cnt > maxcnt) {
                maxcnt = cnt;
                maxval = arr[i-1];
            }
            cnt = 1;
        }
    }
    
    if (cnt > maxcnt) maxval = arr[n-1];
    cout << maxval;
}