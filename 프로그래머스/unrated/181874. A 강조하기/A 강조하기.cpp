#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(auto & a : myString)
        if(a=='a' || a=='A')
            answer += toupper(a);
    else
        answer+=tolower(a);
    return answer;
}