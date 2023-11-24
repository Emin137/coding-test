#include <bits/stdc++.h>

using namespace std;

#define max 1001

int n, m, result;
bool is_visit[max];
bool adj_matrix[max][max];

void dfs(int start){
    is_visit[start] = true;
    for(int i=1; i<=n; i++) if(!is_visit[i] && adj_matrix[start][i]) dfs(i);
}

int main(){
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int x,y;
        cin >> x >> y;
        adj_matrix[x][y] = true;
        adj_matrix[y][x] = true;
    }
    for(int i=1; i<=n; i++){
        if(!is_visit[i]) {
            dfs(i);
            result++;
        }
    }
    cout << result;
    return 0;
}