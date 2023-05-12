#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string str = to_string(order);
    for(auto &a:str)
        if(a=='3' || a=='6' || a=='9')
            answer++;
    return answer;
}