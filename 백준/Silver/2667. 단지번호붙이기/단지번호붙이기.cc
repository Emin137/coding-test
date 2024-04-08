#include <bits/stdc++.h>
using namespace std;
#define max 36
int N, S=0;
int graph[max][max];
bool is_visit[max][max];
pair<int, int> dir[4] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
vector<int> v;
void dfs(int y, int x){
    is_visit[y][x] = true;
    S++;
    for(int i=0; i<4; i++) {
        int next_y = y + dir[i].first;
        int next_x = x + dir[i].second;
        if (0 <= next_y && next_y < N && 0 <= next_x && next_x < N)
            if (graph[next_y][next_x] != 0 && !is_visit[next_y][next_x])
                dfs(next_y, next_x);
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> N;
    for(int i=0; i<N; i++){
        string str;
        cin >> str;
        for(int j=0; j<N; j++)
            graph[i][j] = str[j] - 48;
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++)
            if(!is_visit[i][j] && graph[i][j] != 0){
                dfs(i,j);
                v.push_back(S);
                S=0;
            }
    }
    cout << v.size() << '\n';
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
        cout << v[i] << '\n';
}