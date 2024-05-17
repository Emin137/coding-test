#include <bits/stdc++.h>
using namespace std;
#define max 1001
#define inf 1e9

int N, M, v1, v2;
vector<pair<int, int>> graph[max];
int dist[max];
void dijkstra(int start) {
    for(int i=1; i<=N; i++) dist[i] = inf;
    priority_queue<pair<int, int>> pq;
    pq.push({0, start});
    dist[start] = 0;

    while(!pq.empty()) {
        int cost = -pq.top().first, node = pq.top().second;
        pq.pop();
        if(dist[node] < cost) continue;
        for(int i=0; i<graph[node].size(); i++) {
            pair<int, int> next = graph[node][i];
            if(dist[next.first] > next.second + cost) {
                dist[next.first] = next.second + cost;
                pq.push({-(next.second + cost), next.first});
            }
        }
    }
}

int main() {
    scanf("%d %d", &N, &M);
    for(int i=0; i<M; i++) {
        int v1, v2, w;
        scanf("%d %d %d", &v1, &v2, &w);
        graph[v1].push_back({v2, w});
    }
    scanf("%d %d", &v1, &v2);
    dijkstra(v1);
    printf("%d", dist[v2]);
}