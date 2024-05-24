#include <bits/stdc++.h>
using namespace std;
int N, M;
int dp[100001];
int main(){
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    cin >> N >> M;
    for(int i=1; i<=N; i++){
        int num;
        cin >> num;
        i!=1 ? dp[i] = dp[i-1] + num : dp[i] = num;
    }
    for(int i=0; i<M; i++){
        int a, b;
        cin >> a >> b;
        cout << dp[b] - dp[a-1] << '\n';
    }
}