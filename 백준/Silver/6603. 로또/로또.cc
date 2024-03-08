#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> testCase;

void back_tracking(int idx, int cnt, bool *arr){
    if(cnt == 6){
        for(int i=0; i<n; i++)
            if(arr[i])
                cout << testCase[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i=idx; i<n; i++){
        if(arr[i]) continue;
        arr[i] = true;
        back_tracking(i, cnt+1, arr);
        arr[i] = false;
    }
}

int main(){
    while(true){
        cin >> n;
        if(!n) break;
        testCase.clear();
        for(int i=0; i<n; i++){
            cin >> k;
            testCase.push_back(k);
        }
        bool is_visit[n];
        fill(is_visit, is_visit+n, 0);
        back_tracking(0, 0, is_visit);
        cout << '\n';
    }

}