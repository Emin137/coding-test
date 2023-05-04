#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string answer = "";
    for(auto&a : rny_string)
    {
        if(a=='m')
            answer += "rn";
        else
            answer += a;
    }
    return answer;
}