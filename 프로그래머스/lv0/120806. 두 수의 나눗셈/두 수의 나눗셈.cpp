#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    float num = num1;
    num = num / num2 * 1000;
    answer = num;
    return answer;
}