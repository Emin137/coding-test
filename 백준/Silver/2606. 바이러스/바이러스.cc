#include <bits/stdc++.h>

using namespace std;

#define N 101

bool isVisit[N];
int result = 0;

typedef struct graph
{
    bool matrix[N][N];
    int size;
}graph;

void insert(graph *g, int x, int y)
{
    g->matrix[x][y] = true;
    g->matrix[y][x] = true;
}

void dfs(graph *g, int i)
{
    isVisit[i] = true;
    for(int j=1; j<=g->size; j++)
        if(g->matrix[i][j] && !isVisit[j])
            dfs(g, j);
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n,v,x,y;
    cin >> n >> v;
    auto *g = (graph*) malloc(sizeof(graph));
    g->size = n; memset(g->matrix,0,sizeof(g)); memset(isVisit,false,sizeof(isVisit));
    for(int i=0; i<v; i++)
    {
        cin >> x >> y;
        insert(g,x,y);
    }
    dfs(g,1);
    int cnt = 0;
    for(int i=2; i<=n; i++)
        if(isVisit[i])
            cnt++;
    cout << cnt;
}