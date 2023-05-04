#include <string>
#include <vector>
using namespace std;

int solution(int a, int b) {
    int answer;
    string temp1,temp2;
    temp1 += to_string(a);
    temp2 += to_string(b);
    temp2 += to_string(a);
    temp1 += to_string(b);
    answer = max(stoi(temp1),stoi(temp2));
    return answer;
}