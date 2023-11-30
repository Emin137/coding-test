#include <bits/stdc++.h>
using namespace std;
#define max 51

bool is_visit[max];
bool know_truth[max];
typedef struct graph{
    int n;
    int adj_matrix[max][max];
}graph;

void insert_edge(graph *g, int v1, int v2){
    g->adj_matrix[v1][v2] = 1;
    g->adj_matrix[v2][v1] = 1;
}

void dfs(graph *g, int v){
    is_visit[v] = true;
    if(!know_truth[v])
        know_truth[v] = true;
    for(int i=1; i<=g->n; i++){
        if(g->adj_matrix[v][i] && !is_visit[i])
            dfs(g, i);
    }
}

int main(){
    int n, m, k;
    cin >> n >> m >> k;

    auto *g = (graph *)malloc(sizeof(graph));
    memset(g, 0, sizeof(graph));
    g->n = n;

    for(int i=0; i<k; i++){
        int input;
        cin >> input;
        know_truth[input] = true;
    }

    vector<int> party[m];
    for(int i=0; i<m; i++){
        int input;
        cin >> input;
        for(int j=0; j<input; j++){
            int input2;
            cin >> input2;
            party[i].push_back(input2);
        }
    }

    for(auto a : party){
        if(a.size() > 1){
            for(int i=0; i<a.size()-1; i++){
                for(int j=i+1; j<a.size(); j++){
                    insert_edge(g, a[i], a[j]);
                }
            }
        }
    }
    vector<int> v;
    for(int i=1; i<=g->n; i++) if(know_truth[i]) v.push_back(i);
    for(auto a : v){
        dfs(g, a);
        memset(is_visit, 0, sizeof(is_visit));
    }

    int result = 0;
    for(auto a : party){
        bool check = false;
        for(auto b : a) if(know_truth[b]) check = true;
        if(!check)
            result++;
    }
    cout << result;
    return 0;
}