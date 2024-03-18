#include <bits/stdc++.h>
using namespace std;
typedef struct people{
    string name;
    int day;
    int month;
    int year;
}people;
int n;

bool comp(people x, people y){
    if(x.year == y.year){
        if(x.month == y.month){
            return x.day < y.day;
        }
        return x.month < y.month;
    }
    return x.year < y.year;
}

int main(){
    cin >> n;
    people p;
    vector<people> v;
    for(int i=0; i<n; i++){
        cin >> p.name;
        cin >> p.day;
        cin >> p.month;
        cin >> p.year;
        v.push_back(p);
    }
    sort(v.begin(), v.end(), comp);
    cout << v[n-1].name << '\n' << v[0].name;
}