#include <bits/stdc++.h>
using namespace std;
#define max 1001
int n;
int arr[max];

int dp(int x){
    if(x == 1){
        arr[1] = 1;
        return 1;
    }
    if(x == 2){
        arr[2] = 3;
        return 3;
    }
   arr[x] = arr[x-2] * 2 + arr[x-1];
   return arr[x] %= 10007;
}

int main(){
    cin >> n;
    for(int i=1; i<=n; i++)
        dp(i);
    cout << arr[n];
}