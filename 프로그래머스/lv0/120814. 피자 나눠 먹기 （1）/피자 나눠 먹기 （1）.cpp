#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    if(n<8)
        answer=1;
    else
        answer = (n%7==0)?n/7:n/7+1;
    return answer;
}