#include <bits/stdc++.h>
using namespace std;
#define max 8
int n, m;
bool is_visit[max];
vector<int> v(max);
void dfs(int x, int y){
    if(y == m){
        for(int i=0; i<m; i++) cout << v[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i=x; i<=n; i++){
        v[y] = i;
        dfs(i, y+1);
    }
}

int main(){
    cin >> n >> m;
    dfs(1, 0);
}