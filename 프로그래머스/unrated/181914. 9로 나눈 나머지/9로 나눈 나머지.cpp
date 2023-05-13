#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    for(auto &a:number)
        answer+= a-48;
    return answer%9;
}