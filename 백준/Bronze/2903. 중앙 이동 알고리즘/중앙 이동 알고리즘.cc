#include <bits/stdc++.h>
using namespace std;
int N, cnt = 2;
int main(){
    cin >> N;
    for(int i=0; i<N; i++){
        cnt = cnt * 2 - 1;
    }
    cout << cnt * cnt;
}