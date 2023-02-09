#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> temp0;
    vector<int> temp1;
    for(int i=0;i<sizes.size();i++)
    {
        sort(sizes[i].rbegin(),sizes[i].rend());
        temp0.push_back(sizes[i][0]);
        temp1.push_back(sizes[i][1]);
    }
    int a = *max_element(temp0.begin(),temp0.end());
    int b = *max_element(temp1.begin(),temp1.end());
    answer = a*b;
    return answer;
}