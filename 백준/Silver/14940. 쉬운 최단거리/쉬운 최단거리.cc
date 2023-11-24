#include <bits/stdc++.h>

#define max 1001

using namespace std;

int is_visit[max][max];
int graph[max][max];
int n,m;

pair<int, int> moveDir[4] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

void bfs(pair<int,int> start){
    queue<pair<int,int>> q;
    q.push(start);
    is_visit[start.first][start.second] = 1;
    while(!q.empty()){
        pair<int, int> temp = q.front();
        q.pop();

        
        for(int i=0; i<4; i++){
            pair<int, int> temp2 = {temp.first+moveDir[i].first, temp.second+moveDir[i].second};
            if(temp2.first >= 0 && temp2.first < n && temp2.second >=0 && temp2.second < m) {
                if (!is_visit[temp2.first][temp2.second] && graph[temp2.first][temp2.second] != 0) {
                    is_visit[temp2.first][temp2.second] = is_visit[temp.first][temp.second] + 1;
                    q.push(temp2);
                }
            }
        }
    }
}

int main(){
    cin >> n >> m;

    pair<int,int> start;
    memset(is_visit, 0, sizeof(bool));
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++){
            cin >> graph[i][j];
            if(graph[i][j] == 2) start = {i,j};
        }
    bfs(start);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(!graph[i][j]) cout << "0 ";
            else
                cout << is_visit[i][j] - 1 << ' ';
        }
        cout << '\n';
    }
    return 0;
}