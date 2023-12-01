#include <bits/stdc++.h>
using namespace std;
#define max 100001
int v, vertex1, vertex2, weight, max_vertex = 0, max_weight = 0;
bool is_visit[max];
vector<pair<int, int>> adj_matrix[max];

void dfs(int v, int w){
    if(w > max_weight){
        max_vertex = v;
        max_weight = w;
    }
    is_visit[v] = true;
    for(int i = 0; i < adj_matrix[v].size(); i++){
        if(!is_visit[adj_matrix[v][i].first])
            dfs(adj_matrix[v][i].first, w+adj_matrix[v][i].second);
    }
}


int main(){
    cin >> v;
    for(int i=1; i<=v; i++){
        cin >> vertex1;
        while(true){
            cin >> vertex2;
            if(vertex2 == -1) break;
            cin >> weight;
            adj_matrix[vertex1].push_back({vertex2, weight});
            adj_matrix[vertex2].push_back({vertex1, weight});
        }
    }
    dfs(1,0);
    memset(is_visit, 0, sizeof(is_visit));
    dfs(max_vertex, 0);
    cout << max_weight;

    return 0;
}