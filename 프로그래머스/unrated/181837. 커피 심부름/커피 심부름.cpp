#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    for(auto &a : order)
    {
        if(a.find("latte")!=string::npos)
            answer+=5000;
        else
            answer+=4500;
    }
    return answer;
}