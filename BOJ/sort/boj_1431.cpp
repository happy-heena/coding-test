#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> s;

bool cmp(const string& a, const string& b) {
    if (a.size() != b.size()) return a.size() < b.size();
    
    // ??? a와 b의 사이즈가 같으면 여기로 오는데 왜 vector를 따로 더해야 하는거지...?
    int asum = 0, bsum = 0;
    for(int i = 0 ; i < a.size() ; i ++) { // 숫자만 더함
        if (isdigit(a[i])) asum += (a[i] - '0');
    }

    for(int i = 0 ; i < b.size() ; i++) {
        if (isdigit(b[i])) bsum += (b[i] - '0');
    }
    
    if (asum != bsum) return asum < bsum;
    return a < b; // 사전순
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for(int i = 0 ; i < n ; i++) {
        string a;
        cin >> a;
        s.push_back(a);
    }

    sort(s.begin(), s.end(), cmp);

    for(auto v : s) cout << v << '\n';

}