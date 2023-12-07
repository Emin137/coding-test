#include <bits/stdc++.h>
using namespace std;
#define max 100001
#define inf 1e9
int v, e, a, b , c;
int parent[max];
bool is_visit[max];
vector<pair<int, int>> graph[max];
typedef struct edge{
    int v1;
    int v2;
    int distance;
}edge;

vector<edge> kruskal_vec;

int prim(){
    priority_queue<pair<int, int>> pq;
    int result = 0;
    pq.push({0, 1});
    while(!pq.empty()){
        int vertex = pq.top().second;
        int dist = -pq.top().first;
        pq.pop();
        if(!is_visit[vertex]){
            is_visit[vertex] = true;
            result += dist;
            for(int i=0; i<graph[vertex].size(); i++){
                if(!is_visit[graph[vertex][i].first])
                    pq.push({-graph[vertex][i].second, graph[vertex][i].first});
            }
        }
    }
    return result;
}

int comp(const void *x, const void *y){
    return ((edge *)x)->distance - ((edge *)y)->distance;
}

int find_union(int x){
    if(parent[x] == x)
        return x;
    else
        return find_union(parent[x]);
}

void insert_union(int x, int y){
    x = find_union(x);
    y = find_union(y);
    parent[y] = x;
}

bool check_union(int x, int y){
    x = find_union(x);
    y = find_union(y);
    return x == y;
}

int kruskal(){
    qsort(&kruskal_vec[0], e, sizeof(edge), comp); // sort
    for(int i=1; i<=v; i++) parent[i] = i;
    int result = 0;
    for(int i=0; i<kruskal_vec.size(); i++){
        if(!check_union(kruskal_vec[i].v1, kruskal_vec[i].v2)){
            result+= kruskal_vec[i].distance;
            insert_union(kruskal_vec[i].v1, kruskal_vec[i].v2);
        }
    }
    return result;
}



int main(){
    edge root;
    cin >> v >> e;
    for(int i=0; i<e; i++){ //insert edge
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
        kruskal_vec.push_back({a, b, c});
        if(i==0)
            root = {a, b, c};
    }
   // cout << kruskal();
    cout << prim();
    return 0;
}