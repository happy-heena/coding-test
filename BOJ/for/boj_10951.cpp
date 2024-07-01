#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    // while(cin >> a >> b) {
    //     cout << a + b << '\n';
    // }
    while (scanf("%d %d", &a, &b) == 2) { // 두 정수를 입력받고, 입력이 성공적으로 두 개이면 true를 반환
        printf("%d\n", a + b); // 두 정수의 합을 출력
    }
    return 0;
}