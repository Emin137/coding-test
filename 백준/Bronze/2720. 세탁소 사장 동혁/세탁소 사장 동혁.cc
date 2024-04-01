#include <bits/stdc++.h>
using namespace std;
int T, N;
int main(){
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> N;
        cout << N/25 << ' ';
        N%=25;
        cout << N/10 << ' ';
        N%=10;
        cout << N/5 << ' ';
        N%=5;
        cout << N << '\n';
    }
}