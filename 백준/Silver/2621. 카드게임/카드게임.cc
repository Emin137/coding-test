#include <bits/stdc++.h>
using namespace std;

int n;
char c;

map<char, int> color;
map<int, int> number;
vector<int> v;
vector<int> v2;
int result;

int main() {
    for (int i = 0; i < 5; i++) {
        cin >> c >> n;
        color[c]++;
        number[n]++;
        v.push_back(n);
    }
    v2 = v;
    sort(v2.begin(), v2.end());
    if (color.size() == 1) { // all same color
        if (v2[0] + 1 == v2[1] && v2[1] + 1 == v2[2] && v2[2] + 1 == v2[3] && v2[3] + 1 == v2[4]) {
            result = 900 + v2[4];
            cout << result;
            return 0;
        } // is_sorting

        else {
            result = 600 + v2[4];
            cout << result;
            return 0;
        }
    } else if (v2[0] + 1 == v2[1] && v2[1] + 1 == v2[2] && v2[2] + 1 == v2[3] && v2[3] + 1 == v2[4]) {
        result = 500 + v2[4];
        cout << result;
        return 0;
    } else if (number.size() == 2) {
        for (auto a: number)
            if (a.second == 4) {
                result = a.first + 800;
                cout << result;
                return 0;
            }
        for (auto a: number)
            if (a.second == 3) {
                result += 700 + a.first * 10;
            } else {
                result += a.first;
            }
            cout << result;
            return 0;
    } else if (number.size() == 3) {
        for (auto a: number)
            if(a.second == 3){
                result += a.first + 400;
                cout << result;
                return 0;
            }
            else if (a.second == 2) {
                if (a.first == v2[3]) {
                    result += a.first * 10;
                } else {
                    result += a.first;
                }
            }
        result += 300;
        cout << result;
        return 0;
    } else {
        if (number.size() == 4)
            for (auto a: number)
                if (a.second == 2) {
                    result += 200 + a.first;
                    cout << result;
                    return 0;
                }

        result += 100 + v2[4];
        cout << result;
        return 0;
    }
}