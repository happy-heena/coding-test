#include <bits/stdc++.h>
using namespace std;

const int MX = 1000001;
int n;
int arr[MX];
int pos[MX];
int neg[MX];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
        if (arr[i] >= 0) {
            pos[arr[i]]++;
        } else {
            neg[abs(arr[i])]++;
        }
    }

    for(int i = 1000000 ; i > 0 ; i --) {
        if (neg[i] > 0) {
            for(int j = 0 ; j < neg[i]; j++) {
                cout << i * -1 << '\n';
            }
        }
    }
    for(int i = 0 ; i <= 1000000 ; i ++) {
        if (pos[i] > 0) {
            for(int j = 0 ; j < pos[i]; j ++) {
                cout << i << '\n';
            }
        }
    }
}