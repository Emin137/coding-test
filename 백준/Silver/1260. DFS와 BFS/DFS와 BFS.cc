#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>

using namespace std;

vector<int> graph[1001];
bool check[10001];

void dfs(int x)
{
    check[x] = true;
    cout << x << ' ';
    for(int i=0; i<graph[x].size(); i++)
    {
        int y = graph[x][i];
        if(!check[y])
            dfs(y);
    }
}

void bfs(int x)
{
    queue<int> q;
    q.push(x);
    check[x] = true;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        cout << x << ' ';
        for(int i=0; i<graph[x].size(); i++)
        {
            int y = graph[x][i];
            if(!check[y])
            {
                q.push(y);
                check[y]=true;
            }
        }
    }
}

int main()
{
    int n,m,start;
    cin >> n >> m >> start;
    for(int i=0; i<m; i++)
    {
        int v1,v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    for(int i=1; i<=n; i++)
    {
        sort(graph[i].begin(),graph[i].end());
    }
    dfs(start);
    cout << endl;
    memset(check,false,sizeof(check));
    bfs(start);
}


