#include <string>
#include <vector>
#include <cctype>
using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto & a:my_string)
    {
        if(isupper(a))
            a = tolower(a);
        else
            a = toupper(a);
        answer+=a;
    }
    return answer;
}