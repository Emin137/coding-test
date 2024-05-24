#include <bits/stdc++.h>
using namespace std;
#define max 126
#define inf 1e9
int N, cnt = 1;
int graph[max][max];
int dist[max][max];
pair<int, int> dir[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

void dijkstra(){
    fill(&dist[0][0], &dist[N-1][N], inf);
    priority_queue<pair<int, pair<int, int>>> pq; // cost, pos
    pq.push({-graph[0][0], {0, 0}});
    dist[0][0] = graph[0][0];
    while(!pq.empty()){
        int now_y = pq.top().second.first, now_x = pq.top().second.second, cost = -pq.top().first;
        pq.pop();
        if(dist[now_y][now_x] < cost) continue;
        for(int i=0; i<4; i++){
            int next_y = now_y + dir[i].first, next_x = now_x + dir[i].second, next_cost = cost + graph[next_y][next_x];
            if(0 <= next_y && next_y < N && 0 <= next_x && next_x < N && next_cost < dist[next_y][next_x]){
                dist[next_y][next_x] = next_cost;
                pq.push({-next_cost, {next_y, next_x}});
            }
        }
    }
    cout << "Problem " << cnt++ << ": " << dist[N-1][N-1] << '\n';
}

int main(){
    while(true){
        cin >> N;
        if(!N) break;
        for(int i=0; i<N; i++) for(int j=0; j<N; j++) cin >> graph[i][j];
        dijkstra();
    }
}
