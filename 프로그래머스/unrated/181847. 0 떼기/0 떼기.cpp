#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    int a = stoi(n_str);
    answer += to_string(a);
    return answer;
}