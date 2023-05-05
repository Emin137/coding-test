#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for(auto &a : my_string)
        if(isdigit(a))
            answer.push_back(a-48);
    sort(answer.begin(),answer.end());
    return answer;
}