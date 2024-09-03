#include <bits/stdc++.h>
using namespace std;
int N, K;
int W[101], V[101];
int dp[100001][101];

void DP(){
    for(int i=0; i<N; i++){
        for(int j=1; j<=K; j++){
            if(W[i] > j) dp[j][i] = dp[j][i-1];
            else dp[j][i] = max(dp[j][i-1], V[i] + dp[j-W[i]][i-1]);
        }
    }
}

int main(){
    scanf("%d %d", &N, &K);
    for(int i = 0; i < N; i++)
        scanf("%d %d", W + i, V + i);
    DP();
    cout << dp[K][N-1];
    return 0;
}