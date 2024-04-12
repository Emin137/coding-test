#include <bits/stdc++.h>
using namespace std;
#define max 300
int T, L, cnt = 0;
pair<int, int> pos1, pos2;
int matrix[max][max];
bool is_visit[max][max];
pair<int, int> dir[8] = {{1,2}, {2,1}, {-1, -2}, {-2, -1}, {-1, 2}, {-2, 1}, {1, -2}, {2, -1}};

void bfs(int y, int x){
    queue<pair<int, int>> q;
    q.push({y, x});
    is_visit[y][x] = true;

    while(!q.empty()){
        y = q.front().first;
        x = q.front().second;
        q.pop();
        if(y == pos2.first && x == pos2.second){
            cout << matrix[y][x] << '\n';
            break;
        }
        for(int i=0; i < 8; i++){
            int next_y = y + dir[i].first;
            int next_x = x + dir[i].second;
            if(!is_visit[next_y][next_x] && (0 <= next_y && next_y < L) && (0 <= next_x && next_x < L)){
                q.push({next_y, next_x});
                is_visit[next_y][next_x] = true;
                matrix[next_y][next_x] = matrix[y][x] + 1;
            }
        }
    }
}

int main(){
    cin >> T;
    for(int i=0; i<T; i++){
        fill(&matrix[0][0], &matrix[max-1][max], 0);
        fill(&is_visit[0][0], &is_visit[max-1][max], false);
        cin >> L;
        cin >> pos1.second >> pos1.first;
        cin >> pos2.second >> pos2.first;
        bfs(pos1.first,pos1.second);
    }
}
