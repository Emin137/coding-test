#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    return answer = str2.find(str1) == string::npos ? 0 : 1  ;
}