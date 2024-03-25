#include <bits/stdc++.h>
using namespace std;
#define max 100
int N;
vector<int> adj_matrix[max];
int is_visit[max];

void dfs(int x){
    for(int i=0; i<adj_matrix[x].size(); i++){
        if(is_visit[adj_matrix[x][i]] == 0){
            is_visit[adj_matrix[x][i]] = 1;
            dfs(adj_matrix[x][i]);
        }
    }
}

int main(){
    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            int num;
            cin >> num;
            if(num)
            adj_matrix[i].push_back(j);
        }
    }
    for(int i=0; i<N; i++){
        memset(is_visit, 0, sizeof(is_visit));
        dfs(i);
        for(int j=0; j<N; j++){
            cout << is_visit[j] << ' ';
        }
        cout << '\n';
    }
}