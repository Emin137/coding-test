#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(auto &a : myString)
        a = toupper(a);
    for(auto &a : pat)
        a = toupper(a);
    return answer = myString.find(pat) == string::npos ? 0 : 1;
}