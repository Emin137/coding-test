#include <bits/stdc++.h>
using namespace std;
int N;
string str;
int main(){
    cin >> N >> str;
    int idx;
    for(int i=0; i<N; i++) if(!isdigit(str[i])) idx = i;
    str[idx] = '0';
    while(true){
        int result = 0, cnt = 0;
        for(int i=N-2; i>=0; i--){
            if(!cnt){
                if((str[i] - 48) * 2 > 9) result += ((str[i] - 48) * 2 % 10) + ((str[i] - 48) * 2 / 10);
                else result += (str[i] - 48) * 2;
                cnt++;
            }
            else{
                cnt = 0;
                result += str[i] - 48;
            }
        }
        if(result * 9 % 10 == str[N-1] - 48) break;
        else str[idx]++;
    }
    cout << str[idx];
}