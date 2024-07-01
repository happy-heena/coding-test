#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, m;
int board[60][60];

vector<pair<int, int>> house;
vector<pair<int, int>> chicken;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cin >> board[i][j];
            
            if(board[i][j] == 1) {
                house.push_back({ i, j });
            } else if (board[i][j] == 2) {
                chicken.push_back({ i, j });
            }
        }
    }

    vector<int> brute(chicken.size(), 1);
    fill(brute.begin(), brute.begin() + chicken.size() - m, 0);

    int mn = INT_MAX;
    do {
        int dist = 0;
        for(auto h : house) {
            int tmp = INT_MAX;
            for(int i = 0 ; i < chicken.size() ; i++) {
                if(brute[i] == 0) continue;
                tmp = min (tmp, abs(chicken[i].X - h.X) + abs(chicken[i].Y - h.Y));
            }
            dist += tmp;
        }
        mn = min(mn, dist);
    } while(next_permutation(brute.begin(), brute.end()));
    cout << mn;
}