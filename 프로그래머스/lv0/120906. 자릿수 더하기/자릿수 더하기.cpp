#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string N = to_string(n);
    for(int i=0;i<N.size();i++)
        answer+=N[i]-'0';
    return answer;
}