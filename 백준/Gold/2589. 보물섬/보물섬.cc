#include <bits/stdc++.h>
using namespace std;
int N, M, result = 0;
char graph[51][51];
int arr[51][51];
bool is_visit[51][51];
pair<int, int> dir[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
queue<pair<int, int>> q;
void bfs(int y, int x){
    is_visit[y][x] = true;
    q.push({y, x});
    while(!q.empty()){
        y = q.front().first;
        x = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int dy = y+dir[i].first, dx = x+dir[i].second;
            if((0 <= dy && dy < N) && (0 <= dx && dx < M) && !is_visit[dy][dx] && graph[dy][dx] == 'L'){
                q.push({dy, dx});
                is_visit[dy][dx] = true;
                arr[dy][dx] = arr[y][x] + 1;
            }
        }
    }
}

int main(){
    cin >> N >> M;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            cin >> graph[i][j];
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(graph[i][j] == 'L'){
                bfs(i, j);
                if(*max_element(&arr[0][0], &arr[N][M]) > result)
                    result = *max_element(&arr[0][0], &arr[N-1][M]);
                fill(&is_visit[0][0], &is_visit[N-1][M], false);
                fill(&arr[0][0], &arr[N-1][M], 0);
            }
    cout << result;
}
