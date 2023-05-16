#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto &a :my_string)
    {
        if(answer.find(a)==string::npos)
            answer+=a;
    }
    return answer;
}