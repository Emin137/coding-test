#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}


int main(){
    int N;
    cin >> N;
    vector<pair<int, int>> conference;
    for(int i=0; i<N; i++) {
        int start, end;
        cin >> start >> end;
        conference.push_back({start, end});
    }
    sort(conference.begin(), conference.end(), compare);
    int result = 1;
    int max = conference[0].second;
    for(int i=1; i<conference.size(); i++){
        if(max <= conference[i].first){
            result++;
            max = conference[i].second;
        }
    }
    cout << result;
    return 0;
}