#include <bits/stdc++.h>
using namespace std;
#define MAX 20001
#define inf 1e9;
int V, E, K;
vector<pair<int, int>> graph[MAX];
int dist[MAX];

void dijkstra(int start){
    priority_queue<pair<int, int>> pq;
    pq.push({0, start});
    dist[start] = 0;

    while(!pq.empty()){
        int cost = -pq.top().first;
        int here = pq.top().second;
        pq.pop();

        if(dist[here] < cost) continue;

        for(int i=0; i<graph[here].size(); i++){
            int via_cost = cost + graph[here][i].second;
            if(via_cost < dist[graph[here][i].first]){
                dist[graph[here][i].first] = via_cost;
                pq.push({-via_cost, graph[here][i].first});
            }
        }
    }

}

int main(){
    scanf("%d %d %d", &V, &E, &K);
    for(int i=0; i<E; i++){
        int vertex, edge, weight;
        scanf("%d %d %d", &vertex, &edge, &weight);
        graph[vertex].push_back({edge, weight});
    }
    for(int i=0; i<=V; i++)
        dist[i] = inf;
    dijkstra(K);

    for(int i=1; i<=V; i++)
        if(dist[i] == 1e9)
           printf("INF\n");
        else printf("%d\n", dist[i]);
}