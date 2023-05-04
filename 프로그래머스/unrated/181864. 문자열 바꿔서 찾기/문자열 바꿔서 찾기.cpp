#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(auto &a : myString)
        if(a=='A')
            a='B';
        else
            a='A';
    
    return answer = myString.find(pat) == string::npos ? 0 : 1;
}