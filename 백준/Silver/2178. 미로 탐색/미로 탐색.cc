#include <bits/stdc++.h>
using namespace std;
int N,M;
int graph[100][100];
queue<pair<int,int>> q;
int dirX[4] = {1,-1,0,0};
int dirY[4] = {0,0,-1,1};
int BFS(int y, int x)
{
    q.push({y,x});
    while(q.size())
    {
        y = q.front().first; x = q.front().second;
        q.pop();
        for(int i=0; i<4; i++)
        {
            int nextY = y+dirY[i], nextX = x+dirX[i];
            if(0 <= nextY && nextY < N && 0 <= nextX && nextX < M)
                if(graph[nextY][nextX] == 1)
                {
                    graph[nextY][nextX] = graph[y][x]+1;
                    q.push({nextY,nextX});
                }
        }
    }
    return graph[N-1][M-1];
}
int main()
{
    cin >> N >> M;
    for(int y = 0; y<N; y++) for(int x =0; x<M; x++)
        scanf("%1d", &graph[y][x]);
    cout << BFS(0, 0);
}
