#include <bits/stdc++.h>
using namespace std;
#define MAX 16
int N;
int T[MAX];
int P[MAX];
int DP[MAX];

void Dp(){
    for(int i = 1; i <= N; i++){
        int complete_day = i + T[i];
        if(complete_day > N + 1) continue;
        //DP[complete_day] = max(DP[complete_day], DP[i] + P[i]);
        for(int j = complete_day; j <= N + 1; j++)
            DP[j] = max(DP[j], DP[i] + P[i]);
    }
}



int main(){
    cin >> N;
    for(int i = 1; i <= N; i ++) cin >> T[i] >> P[i];
    Dp();
    cout << *max_element(DP, DP + N + 2);
}