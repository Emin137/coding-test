#include <bits/stdc++.h>
using namespace std;
#define MAX 16

int N, result = 0;
int arr[MAX];

bool check(int x){
    for(int i=0; i<x; i++){
        if(arr[x] == arr[i] || (x - i  == abs(arr[x] - arr[i]))) return false;
    }
    return true;
}

void N_Queen(int x){
    if(x == N) {
        result++;
        return;
    }
    for(int i=0; i<N; i++){
        arr[x] = i;
        if(check(x)) N_Queen(x+1);
    }
}

int main(){
    cin >> N;
    N_Queen(0);
    cout << result;
}