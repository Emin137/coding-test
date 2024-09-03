#include <bits/stdc++.h>
using namespace std;
map<string, pair<long,long>> m = {
        {"black", {0, 1}},
        {"brown", {1, 10}},
        {"red", {2, 100}},
        {"orange", {3, 1000}},
        {"yellow", {4, 10000}},
        {"green", {5, 100000}},
        {"blue", {6, 1000000}},
        {"violet", {7, 10000000}},
        {"grey", {8, 100000000}},
        {"white", {9, 1000000000}}
};
int main(){
    string str[3];
    cin >> str[0] >> str[1] >> str[2];
    printf("%ld", (m[str[0]].first * 10 + m[str[1]].first) * m[str[2]].second);
}