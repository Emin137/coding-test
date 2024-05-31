#include <bits/stdc++.h>
using namespace std;
int N;
#define MAX 301
int dp[MAX];
int main(){
    cin >> N;
    vector<int> v(N);
    for(int i=0; i<N; i++){
        cin >> v[i];
    }
    dp[1] = v[0];
    dp[2] = v[1] + dp[1];
    for(int i=3; i<=N; i++){
        dp[i] = max(dp[i-2]+v[i-1], dp[i-3]+v[i-2]+v[i-1]);
    }
    cout << dp[N];
}
