#include <bits/stdc++.h>
#define MAX 9
using namespace std;

int N, M, maxSafeZone = 0;
int graph[MAX][MAX];
int tempGraph[MAX][MAX];
bool isVisit[MAX][MAX];
vector<pair<int, int>> safeZone;
pair<int, int> dir[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

void initGraph(pair<int, int> *wall){
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            tempGraph[i][j] = graph[i][j];
    for(int i = 0; i < 3; i++)
        tempGraph[wall[i].first][wall[i].second] = 1;
}

void bfsVirus() {
    queue<pair<int, int>> q;
    memset(isVisit, false, sizeof(isVisit));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (tempGraph[i][j] == 2) {
                q.push({i, j});
                isVisit[i][j] = true;
            }

    while (!q.empty()) {
        int now_y = q.front().first, now_x = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int next_y = now_y + dir[i].first, next_x = now_x + dir[i].second;
            if (0 <= next_y && next_y < N && 0 <= next_x && next_x < M && !isVisit[next_y][next_x] && !tempGraph[next_y][next_x]) {
                q.push({next_y, next_x});
                isVisit[next_y][next_x] = true;
                tempGraph[next_y][next_x] = 2;
            }
        }
    }
}

int getSafeZone() {
    int safeCount = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (tempGraph[i][j] == 0)
                safeCount++;
    return safeCount;
}

void combi(int cnt, int next, pair<int, int> *wall) {
    if (cnt == 3) {
        initGraph(wall);
        bfsVirus();
        maxSafeZone = max(maxSafeZone, getSafeZone());
        return;
    }

    for (int i = next; i < safeZone.size(); i++) {
        wall[cnt] = safeZone[i];
        combi(cnt + 1, i + 1, wall);
    }
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) {
            cin >> graph[i][j];
            if (graph[i][j] == 0)
                safeZone.push_back({i, j});
        }

    pair<int, int> wall[3];
    combi(0, 0, wall);

    cout << maxSafeZone << endl;

    return 0;
}
