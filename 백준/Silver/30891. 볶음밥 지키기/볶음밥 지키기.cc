#include <bits/stdc++.h>
using namespace std;
int n, r;
int v1, v2;
vector<pair<int,int>> vec;
int result = 0;

void check(int x, int y){
    int temp = 0;
    for(int i=0; i<n; i++){
        int X = vec[i].first;
        int Y = vec[i].second;
        if(sqrt(pow((x-X),2) + pow((y-Y),2)) <= r)
            temp+=1;
    }
    if(temp > result){
        result = temp;
        v1 = x;
        v2 = y;
    }
}

int main(){
    cin >> n >> r;
    for(int i=0; i<n; i++){
        cin >> v1 >> v2;
        vec.push_back({v1,v2});
    }
    for(int i=-100; i<=100; i++){
        for(int j=-100; j<=100; j++){
            check(i, j);
        }
    }
    cout << v1 << '\n' << v2;
    return 0;
}