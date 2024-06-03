#include <bits/stdc++.h>
#define MAX 1001
using namespace std;
int N;
int dp[MAX], arr[MAX];

void Dp(int idx){
    for(int i=0; i<idx; i++) if(arr[i] < arr[idx]) dp[idx] = max(dp[idx], dp[i] + 1);
}

int main(){
    cin >> N;
    for(int i=0; i<N; i++) dp[i] = 1;
    for(int i=0; i<N; i++) cin >> arr[i];
    for(int i=1; i<N; i++){
        Dp(i);
    }
    cout << *max_element(dp, dp+N);

}