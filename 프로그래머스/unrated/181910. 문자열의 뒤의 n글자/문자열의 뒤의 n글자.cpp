#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    int i = my_string.size()-n;
    for(int j = i; j<my_string.size(); j++)
        answer += my_string[j];
    return answer;
}