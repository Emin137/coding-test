#include <bits/stdc++.h>
using namespace std;
#define max 10001
#define inf 1e9
int n, a, b, c;
vector<pair<int, int>> graph[max];
vector<int> dijkstra(int start){
    vector<int> dist(n, inf);
    priority_queue<pair<int, int>> pq;
    dist[start] = 0;
    pq.push({0, start});
    while(!pq.empty()){
        int cost = -pq.top().first;
        int idx = pq.top().second;
        pq.pop();

        for(int i=0; i<graph[idx].size(); i++){
            int next_cost = cost + graph[idx][i].second;
            int next_idx = graph[idx][i].first;

            if(dist[next_idx] > next_cost){
                dist[next_idx] = next_cost;
                pq.push({-next_cost, next_idx});
            }
        }
    }
    return dist;
}

int main(){
    cin >> n;
    for(int i=1; i<n; i++) {
        cin >> a >> b >> c;
        a--; b--;
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }
    vector<int> vec = dijkstra(0);
    int max_e = *max_element(vec.begin(), vec.end());
    int idx;
    for(int i=0; i<vec.size(); i++)
        if(vec[i] == max_e)
            idx = i;
    vec = dijkstra(idx);
    cout << *max_element(vec.begin(), vec.end());

}