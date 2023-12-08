#include <bits/stdc++.h>
using namespace std;

int N;
char a;
int b;
bool theater[10][20];

int main(){
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> a >> b;
        theater[a-'A'][b-1] = true;
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<20; j++)
            if(theater[i][j])
                cout << 'o';
            else
                cout << '.';
        cout << '\n';
    }
}