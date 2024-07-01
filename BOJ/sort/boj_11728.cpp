#include <bits/stdc++.h>
using namespace std;

int n, m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    int arr1[n];
    int arr2[m];
    int merge[n + m];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr1[i];
    }

    for(int i = 0 ; i < m ; i++) {
        cin >> arr2[i];
    }

    int c = n + m;
    int idx1 = 0, idx2 = 0, idx = 0;
    while(c--) {
        if (idx1 == n) {
            merge[idx] = arr2[idx2++];
        } else if (idx2 == m) {
            merge[idx] = arr1[idx1++];
        } else {
            if (arr1[idx1] <= arr2[idx2]) {
                merge[idx] = arr1[idx1++];
            } else {
                merge[idx] = arr2[idx2++];
            }
        }
        cout << merge[idx++] << ' ';
    }
}