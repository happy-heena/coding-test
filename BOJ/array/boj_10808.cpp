#include <bits/stdc++.h>
using namespace std;

int solution() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    for(char a = 'a'; a <= 'z'; a ++) {
        int cnt = 0;
        for(auto c : s)
            if (a == c) cnt++;
        cout << cnt << ' ';
    }
}

// 전역일 경우, 0으로 자동 초기화된다.
// 지역일 경우, 쓰레기값으로 채워지므로 0으로 초기화가 필요하다.
// int freq[26] = {}
// fill(freq, freq+26, 0)
int freq[26];
int solution2() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    // 아스키 코드상 97 ~ 122 (a ~ z)
    for(auto c : s)
        freq[c-'a']++;
    for(int i = 0 ; i < 26 ; i ++)
        cout << freq[i] << ' ';
}

int main() {
    char a[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int b[26] = {0};
    char s[101] = {0};
    cin >> s;
    for(int i = 0 ; i < 101 ; i ++) {
        for(int j = 0 ; j < 26; j ++) {
            if (s[i] == a[j]) {
                b[j]++;
                break;
            }
        }
        if(!s[i]) break;
    }
    for(int i = 0 ; i < 26; i ++) {
        cout << b[i] << ' ';
    }
}