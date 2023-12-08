#include <bits/stdc++.h>
using namespace std;
#define max 1001

int N, M;
int a, b, c;

typedef struct edge{
    int v1;
    int v2;
    int weight;
}edge;

vector<pair<int, int>> graph[max];
bool is_visit[max];

int prim(){
    vector<int> MST = {1};
    is_visit[1] = true;
    int result = 0;
    for(int i=0; i<N-1; i++){
        int min = INT_MAX;
        int min_idx = 0;
        for(int j=0; j<MST.size(); j++){
            int idx = MST[j];
            for(int k=0; k<graph[idx].size(); k++) {
                int dist = graph[idx][k].second;
                int next_idx = graph[idx][k].first;
                if(min > dist && !is_visit[next_idx]){
                    min = dist;
                    min_idx = next_idx;
                }
            }
        }
        result += min;
        is_visit[min_idx] = true;
        MST.push_back(min_idx);
    }
    return result;
}


int main(){
    cin >> N >> M;
    for(int i=0; i<M; i++){
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }
    cout << prim();
    return 0;
}