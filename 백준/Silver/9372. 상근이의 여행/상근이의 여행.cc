#include <bits/stdc++.h>
using namespace std;
#define max 1001

int T, N, M;
int v1, v2;

int main(){
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> N >> M;
        for(int j=0; j<M; j++){
            cin >> v1 >> v2;
        }
        cout << N-1 << '\n';
    }
    return 0;
}