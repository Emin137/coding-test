#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string temp = to_string(age);
    for(auto &a : temp)
    {
       answer+= a+'1' ;
    }
    return answer;
}