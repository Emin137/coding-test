#include <bits/stdc++.h>
using namespace std;
int N, M;
bool is_check, is_zero;
int graph[1001][1001];
bool is_visit[1001][1001];
pair<int, int> dir[4] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
queue<pair<int, int>> q;
int main(){
    cin >> M >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> graph[i][j];
            if(graph[i][j] == 1) q.push({i, j});
        }
    }
    while(!q.empty()){
        int y = q.front().first, x = q.front().second;
        is_visit[y][x] = true;
        q.pop();
        for(int i=0; i<4; i++){
            int next_y = y + dir[i].first, next_x = x + dir[i].second;
            if(graph[next_y][next_x] == 0 && !is_visit[next_y][next_x] && (0 <= next_y && next_y < N) && (0 <= next_x && next_x < M)){
                q.push({next_y, next_x});
                graph[next_y][next_x] = graph[y][x] + 1;
                is_check = true;
            }
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(graph[i][j] == 0) is_zero = true;
        }
    }

        if(is_zero) cout << -1;
        else if(!is_check) cout << 0;
        else cout << *max_element(&graph[0][0], &graph[N][M]) - 1;
}