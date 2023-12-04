#include <bits/stdc++.h>
using namespace std;
#define max 1001
#define inf 10000000
int n, m, x;
int adj_matrix[max][max];
vector<int> dijkstra(int start){
    priority_queue<pair<int,int>> pq;
    vector<int> vec(n,inf);
    pq.push({0, start});
    vec[start] = 0;
    while(!pq.empty()){
        int current_dist = -pq.top().first;
        int current_idx = pq.top().second;
        pq.pop();

        if(vec[current_idx] < current_dist)
            continue;
        for(int i=0; i<n; i++){
            int next_dist = current_dist + adj_matrix[current_idx][i];
            if(vec[i] > next_dist){
                vec[i] = next_dist;
                pq.push({-next_dist, i});
            }
        }
    }
    return vec;
}

int main(){
    cin >> n >> m >> x; x--;
    fill(&adj_matrix[0][0], &adj_matrix[n][n-1], inf);

    int vertex1, vertex2, distance;
    for(int i=0; i<m; i++){
        cin >> vertex1 >> vertex2 >> distance;
        adj_matrix[vertex1-1][vertex2-1] = distance;
    }

    vector<vector<int>> vec;
    for(int i=0; i<n; i++){
        vec.push_back(dijkstra(i));
    }

    vector<int> result;
    for(int i=0; i<n; i++){
        if(i != x)
            result.push_back(vec[i][x]+vec[x][i]);
    }

    cout << *max_element(result.begin(), result.end());

    return 0;
}