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

int prim(edge root){
    vector<edge> vec;
    int vertex = root.v1;
    is_visit[vertex] = true;
    while(vec.size() != v-1){
        edge temp;
        int min = inf;
        for(int i=0; i<graph[vertex].size(); i++){
            if(graph[vertex][i].second < min && !is_visit[graph[vertex][i].first]){
                min = graph[vertex][i].second;
                temp = {vertex, graph[vertex][i].first, graph[vertex][i].second};
            }
        }
        vec.push_back(temp);
        vertex = temp.v2;
        is_visit[vertex] = true;
    }
    int result = 0;
    for(auto i : vec)
        result += i.distance;
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
    cout << kruskal();
    //cout << prim(root);
    return 0;
}