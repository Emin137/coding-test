#include <bits/stdc++.h>
using namespace std;
#define MAX 801
#define inf 1e9
int N, E, node1, node2;
vector<pair<int, int>> graph[MAX];

int arr[MAX];

void dijkstra(int start) {
    for(int i=1; i<=N; i++) arr[i] = inf;
    priority_queue<pair<int, int>> pq; // pair<height, node>
    arr[start] = 0;
    pq.push({0, start});

    while(!pq.empty()) {
        int now_weight = -pq.top().first, now_node = pq.top().second;
        pq.pop();
        if(arr[now_node] < now_weight) continue;
        for(int i=0; i<graph[now_node].size(); i++) {
            int next_weight = now_weight + graph[now_node][i].second, next_node = graph[now_node][i].first;
            if(next_weight < arr[next_node]) {
                arr[next_node] = next_weight;
                pq.push({-arr[next_node], next_node});
            }
        }
    }
}

int main()
{
    cin >> N >> E;
    for(int i=0; i<E; i++) {
        int v1, v2, h;
        cin >> v1 >> v2 >> h;
        graph[v1].push_back({v2, h});
        graph[v2].push_back({v1, h});
    }
    cin >> node1 >> node2;
    dijkstra(node1);
    long long node1_start = arr[1], node1_node2 = arr[node2], node1_end = arr[N];
    dijkstra(node2);
    long long node2_start = arr[1], node2_end = arr[N];
    long long result = min(node1_start + node1_node2 + node2_end, node2_start + node1_node2 + node1_end);
    result >= inf ? cout << -1 : cout << result;

    return 0;
}
