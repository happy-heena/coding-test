#include <bits/stdc++.h>
using namespace std;

int func2(int arr[], int n) {
    int occur[101] = {};
    for(int i = 0 ; i < n; i ++) {
        if(occur[100-arr[i]])
            return 1;
        occur[arr[i]] = 1;
    }
    return 0;
}

int main() {
    
}