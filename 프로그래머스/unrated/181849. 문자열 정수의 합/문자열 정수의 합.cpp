#include <string>
#include <vector>

using namespace std;

int solution(string num_str) {
    int answer = 0;
    for(auto &a : num_str)
    {
        answer += a-48;
    }
    return answer;
}