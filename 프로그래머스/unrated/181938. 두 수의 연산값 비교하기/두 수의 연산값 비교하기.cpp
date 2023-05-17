#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string x;
    x = to_string(a)+to_string(b);
    return max(stoi(x),2*a*b);
}