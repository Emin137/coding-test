#include <bits/stdc++.h>
using namespace std;
#define max 8
int n, m;
bool is_visit[max];
vector<int> v;
void dfs(int x){
    if(x==m){
        for(int i=0; i<m; i++) cout << v[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i=1; i<=n; i++){
        is_visit[i] = true;
        v.push_back(i);
        dfs(x+1);
        v.pop_back();
        is_visit[i] = false;
    }
}

int main(){
    cin >> n >> m;
    dfs(0);
}