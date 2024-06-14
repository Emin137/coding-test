#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
int N;
vector<int> graph[MAX];
int parent[MAX];
void dfs(int x){
    for(int i=0; i<graph[x].size(); i++){
        if(parent[graph[x][i]] == 0){
            parent[graph[x][i]] = x;
            dfs(graph[x][i]);
        }
    }
}
int main(){
    cin >> N;
    for(int i=0; i<N-1; i++){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1);
    for(int i=2; i<=N; i++) cout << parent[i] << '\n';

    return 0;
}