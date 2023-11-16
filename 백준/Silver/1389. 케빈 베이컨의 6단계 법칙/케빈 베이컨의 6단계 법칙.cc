#include <bits/stdc++.h>
#define MAX 101
using namespace std;

bool isVisit[MAX];
bool adjMat[MAX][MAX];
int path[MAX];
int N,M;

void bfs(int start){
    queue<int> q;
    isVisit[start] = true;
    q.push(start);

    while(!q.empty()){
        int i = q.front();
        q.pop();

        for(int j=1; j<=N; j++){
            if(adjMat[i][j] && !isVisit[j]){
                isVisit[j] = true;
                q.push(j);
                path[j] = path[i]+1;
            }
        }
    }
}


int main() {
    ios::sync_with_stdio(NULL);
    cin.tie(0); cout.tie(0);

    cin >> N >> M;
    for(int i=0; i<M; i++){
        int x,y;
        cin >> x >> y;
        adjMat[x][y] = adjMat[y][x] = true;
    }
    int result[N+1];
    memset(result,0,sizeof(result));
    for(int i=1; i<=N; i++){
        bfs(i);
        for(int j=1; j<=N; j++){
            if(i!=j)
                result[i] += path[j];
        }
        memset(isVisit,0,sizeof(isVisit));
        memset(path,0,sizeof(path));
    }
    int min = *min_element(result+1, result+N);
    for(int i=1; i<=N; i++)
        if(result[i]==min){
            cout << i;
            break;
        }



    return 0;
}
