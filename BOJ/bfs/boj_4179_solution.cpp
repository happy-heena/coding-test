#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

string board[1002];
int dist1[1002][1002]; // 불의 전파 시간
int dist2[1002][1002]; // 지훈이의 이동 시간
int n, m;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    // 전역 변수는 기본적으로 0으로 초기화되고,
    // 거리가 0이상인 경우에는 탐색 대상이 되지 않으므로 거리를 전부 -1로 초기화한다.
    for(int i = 0 ; i < n ; i++) {
        fill(dist1[i], dist1[i] + m, -1);
        fill(dist2[i], dist2[i] + m, -1);
    }
    
    // string[1002]는 string 타입의 char 배열이 1002 행 있다고 생각한다.
    // 따라서, n줄 입력받아야 하므로 행에 대한 반복문만 실행한다.
    for(int i = 0 ; i < n ; i ++) {
        cin >> board[i];
    }

    queue<pair<int, int>> Q1;
    queue<pair<int, int>> Q2;

    // string 타입은 결국 char의 배열이므로, n, m으로 각각 접근할 수 있다.
    for(int i = 0 ; i < n ; i ++) {
        for(int j = 0 ; j < m ; j++) {
            if(board[i][j] == 'F') {
                Q1.push({ i, j });
                dist1[i][j] = 0;
            }
            if(board[i][j] == 'J') {
                Q2.push({ i, j });
                dist2[i][j] = 0;
            }
        }
    }

    while(!Q1.empty()) {
        auto cur = Q1.front();
        Q1.pop();

        for(int dir = 0 ; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            // 벽을 별도의 거리 정도로 가지고 있을 필요가 없다.
            // board의 크기와 dist의 크기가 같으므로
            // 같은 위치의 board의 값이 '#'인지 확인하는 것으로 판단할 수 있다.
            if(dist1[nx][ny] >= 0 || board[nx][ny] == '#') continue;
            dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
            Q1.push({ nx, ny });
        }
    }

    // 지훈이에 대한 BFS
    while(!Q2.empty()) {
        auto cur = Q2.front();
        Q2.pop();

        for(int dir = 0 ; dir < 4 ; dir ++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if(nx < 0 || nx >= n || ny < 0 || ny >= m) { // 범위를 벗어났다는 것은
            // 탈출을 성공했다는 의미. 큐에 거리 순으로 들어가므로 최초에 탈출한 시간을 출력하면 된다.
            // 내가 짠 소스에는 탈출 조건을 넣지 않았다.
                cout << dist2[cur.X][cur.Y] + 1;
                return 0;
            }
            if(dist2[nx][ny] >= 0 || board[nx][ny] == '#') continue;
            // 불의 전파 시간을 조건에 추가한다.
            if(dist1[nx][ny] != -1 && dist1[nx][ny] <= dist2[cur.X][cur.Y] + 1) continue;
        
            dist2[nx][ny] = dist2[cur.X][cur.Y] + 1;
            Q2.push({ nx, ny });
        }
    }

    // 여기에 도달했다는 것은 탈출에 실패했음을 의미한다.
    cout << "IMPOSSIBLE";
}