#include <bits/stdc++.h>
using namespace std;
#define MAX 601
// I = 도연, P = 사람
int N, M;
pair<int, int> pos;
vector<char> graph[MAX];
bool is_visit[MAX][MAX];
int result = 0;
pair<int, int> moveDir[4] = {{0,1}, {0,-1}, {1,0}, {-1,0}};

void dfs(int y, int x){
    if(y < 0 || y >= N) return;
    if(x < 0 || x >= M) return;
    if(graph[y][x] == 'X') return;
    if(graph[y][x] == 'P'){
        result++;
    }
    is_visit[y][x] = true;
    for(int i=0; i<4; i++){
        pair<int,int> nextPos = {y+moveDir[i].first, x+moveDir[i].second};
        if(!is_visit[nextPos.first][nextPos.second]) dfs(nextPos.first, nextPos.second);
    }
}

int main(){
   cin >> N >> M;
   for(int y=0; y<N; y++)
       for(int x=0; x<M; x++){
           char c;
           cin >> c;
           graph[y].push_back(c);
           if(c == 'I') pos = {y, x};
       }
    dfs(pos.first, pos.second);
   if(result == 0) cout << "TT";
   else cout << result;

   return 0;
}