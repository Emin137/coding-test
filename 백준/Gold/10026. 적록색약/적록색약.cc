#include <bits/stdc++.h>
using namespace std;
int N, result = 0, result2 = 0;
char graph[101][101];
bool is_visit[101][101];
pair<int, int> dir[4] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

void dfs(int y, int x, char z){
    is_visit[y][x] = true;
    for(int i=0; i<4; i++){
        int next_y = y+dir[i].first, next_x = x+dir[i].second;
        if((0 <= next_y && next_y < N) && (0 <= next_x && next_x < N) && !is_visit[next_y][next_x] && graph[next_y][next_x] == z)
            dfs(next_y, next_x, z);
    }
}

int main(){
    cin >> N;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            cin >> graph[i][j];

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++){
            if(graph[i][j] == 'R' && !is_visit[i][j]){
                dfs(i, j, 'R');
                result++;
            }
            if(graph[i][j] == 'G' && !is_visit[i][j]){
                dfs(i, j, 'G');
                result++;
            }
            if(graph[i][j] == 'B' && !is_visit[i][j]){
                dfs(i, j, 'B');
                result++;
            }
        }
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            if(graph[i][j] == 'R') graph[i][j] = 'G';
    fill(&is_visit[0][0], &is_visit[N-1][N], 0);

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++){
            if(graph[i][j] == 'G' && !is_visit[i][j]){
                dfs(i, j, 'G');
                result2++;
            }
            if(graph[i][j] == 'B' && !is_visit[i][j]){
                dfs(i, j, 'B');
                result2++;
            }
        }
    cout << result << '\n' << result2;
}