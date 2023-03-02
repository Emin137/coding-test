#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    double i = sqrt(n);
    if(i-(int)i == 0)
        answer = (i+1) * (i+1);
    else
        answer = -1;
    return answer;
}