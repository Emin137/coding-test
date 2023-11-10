#include <bits/stdc++.h>

using namespace std;

int main(){

    map<string,int> m;
    vector<string> v;
    int N,M;
    cin >> N >> M;
    for(int i=1; i<=N; i++){
        string str;
        cin >> str;
        m[str] = i;
        v.push_back(str);
    }
    
    vector<string> result;
    for(int i=0; i<M; i++){
        string str;
        cin >> str;
        if(!isdigit(str[0])){
            result.push_back(to_string(m[str]));
        }
        else{
            result.push_back(v[stoi(str)-1]);
        }
    }
    for(int i=0; i<result.size(); i++)
        cout << result[i] << '\n';

    return 0;
}