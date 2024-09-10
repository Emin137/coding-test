#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
int N, K, num = 0;
int graph[MAX];

void BFS(int start){
   queue<int> q;
   q.push(start);
   graph[start] = 1;
   while(!q.empty()){
       int now_pos = q.front();
       q.pop();

       int next_pos[3] = {now_pos - 1, now_pos + 1, now_pos * 2};
       for(int i = 0; i < 3; i++){
           if(0 <= next_pos[i] && next_pos[i] < MAX && !graph[next_pos[i]]){
               q.push(next_pos[i]);
               graph[next_pos[i]] = graph[now_pos] + 1;
               if(next_pos[i] == K) return;
           }
       }
   }
}
int main(){
    cin >> N >> K;
    BFS(N);
    cout << graph[K] - 1;
}