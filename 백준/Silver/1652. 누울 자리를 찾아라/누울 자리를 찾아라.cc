#include <bits/stdc++.h>
using namespace std;
#define max 100
bool arr[max][max];
int n, cnt, result=0;
char input;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> input;
            if(input == '.')
                arr[i][j] = true;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]) cnt++;
            else{
                cnt = 0;
            }
            if(cnt == 2) result++;
        }
        cnt = 0;
    }
    cout << result << '\n';
    result = 0; cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j][i]) cnt++;
            else{
                cnt = 0;
            }
            if(cnt == 2) result++;
        }
        cnt = 0;
    }
    cout << result;
}


