#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(NULL); ios::sync_with_stdio(0);
    map<string,string> m;
    int N,M;
    cin >> N >> M;
    string a,b;
    for(int i=0; i<N; i++){
        cin >> a >> b;
        m[a] = b;
    }

    for(int i=0; i<M; i++){
        cin >> a;
        cout << m[a] << '\n';
    }

    return 0;
}