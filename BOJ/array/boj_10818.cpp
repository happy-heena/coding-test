#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    int min, max;
    scanf("%d%d", &n, &a);
    min = a;
    max = a;
    for(int i = 1 ; i < n; i ++) {
        scanf("%d", &a);
        if (a <= min) min = a;
        if (a >= max) max = a;
    }
    printf("%d %d", min, max);
    return 0;
}