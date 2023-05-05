#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for(auto & a : rsp)
    {
        if(a == '0')
            answer += '5';
        else if(a == '2')
            answer += '0';
        else if(a == '5')
            answer += '2';
    }
    return answer;
}