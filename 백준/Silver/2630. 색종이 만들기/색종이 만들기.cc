#include <bits/stdc++.h>
#define MAX 129
using namespace std;
int graph[MAX][MAX];
int white = 0, blue = 0;

void find(int x, int y, int size){
    bool check1 = true;
    bool check2 = true;
    for(int i = y; i<y+size; i++){
        for(int j = x; j<x+size; j++){
            if(graph[i][j])
                check1 = false;
            else
                check2 = false;
        }
    }
    if(check1){
        white++;
        return;
    }
    if(check2){
        blue++;
        return;
    }

    find(x,y,size/2);
    find(x+size/2,y,size/2);
    find(x,y+size/2,size/2);
    find(x+size/2,y+size/2,size/2);
}

int main() {
    ios::sync_with_stdio(NULL);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;
    for(int y=0; y<N; y++){
        for(int x=0; x<N; x++){
            int i;
            cin >> i;
            graph[y][x] = i;
        }
    }
    find(0,0,N);
    cout << white << '\n';
    cout << blue << '\n';
    return 0;
}
