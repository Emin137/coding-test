#include <bits/stdc++.h>
using namespace std;
#define max 9
int n, m;
bool is_visit[max];
void dfs(int x, int y){
    if(x==m){
        for(int i=0; i<n; i++) if(is_visit[i]) cout << i+1 << ' ';
        cout << '\n';
    }
    for(int i=y; i<n; i++){
        if(is_visit[i]) continue;
        is_visit[i] = true;
        dfs(x+1, i+1);
        is_visit[i] = false;
    }
}
int main(){
    cin >> n >> m;
    dfs(0, 0);
}