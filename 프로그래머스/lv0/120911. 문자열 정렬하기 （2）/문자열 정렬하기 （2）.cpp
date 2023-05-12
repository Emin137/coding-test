#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto &a:my_string)
        answer+=tolower(a);
    sort(answer.begin(),answer.end());
    return answer;
}