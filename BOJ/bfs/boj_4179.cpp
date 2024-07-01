#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

const int MX = 1001;
char board[MX][MX];
int dist[MX][MX];
int fire[MX][MX];
int r, c;

int dx[4] = { 1, 0, -1, 0};
int dy[4] = { 0, 1, 0, -1};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> r >> c;

    queue<pair<int, int>> JQ;
    queue<pair<int, int>> FQ;

    for(int i = 0 ; i < r; i ++) {
        fill(dist[i], dist[i] + c, -1);
        fill(fire[i], fire[i] + c, -1);
    }

    for(int i = 0; i < r ; i++) {
        for(int j = 0 ; j < c ; j++) {
            cin >> board[i][j];

            if (board[i][j] == 'J') {
                JQ.push({ i, j });
                dist[i][j] = 0;
            } else if (board[i][j] == 'F') {
                FQ.push({ i, j });
                fire[i][j] = 0;
            }
        }
    }

    while(!FQ.empty()) {
        auto cur = FQ.front();
        FQ.pop();

        for(int dir = 0 ; dir < 4 ; dir ++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
            if (fire[nx][ny] >= 0 || board[nx][ny] == '#') continue;
            fire[nx][ny] = fire[cur.X][cur.Y] + 1;
            FQ.push({ nx, ny });
        }
    }

    while(!JQ.empty()) {
        auto cur = JQ.front();
        JQ.pop();

        for(int dir = 0 ; dir < 4 ; dir ++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= r || ny < 0 || ny >= c) {
                cout << dist[cur.X][cur.Y] + 1;
                return 0;
            }
            if (dist[nx][ny] >= 0 || board[nx][ny] == '#') continue;
            if (fire[nx][ny] != -1 && dist[cur.X][cur.Y] + 1 >= fire[nx][ny]) continue;
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            JQ.push({ nx, ny });
        }
    }
    cout << "IMPOSSIBLE";
}