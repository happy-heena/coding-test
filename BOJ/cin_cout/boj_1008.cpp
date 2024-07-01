#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    // cout은 출력할 떄 기본적으로 6자리까지 출력한다.
    // 절대오차가 10^-9 이하여야 하므로 소수점 9자리까지 출력해야 한다.
    cout << fixed;  // 소수점 아래부터 유효숫자를 세겠다는 명령어
    cout.precision(9); // 유효숫자 표기 명령어
    cout << a / b;
    return 0;
}