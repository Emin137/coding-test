#include <string>
#include <vector>

using namespace std;

bool Check(int n)
{
    bool b;
    for(int i=2; i<n; i++)
        if(n%i==0)
            return false;
    return true;
}

vector<int> solution(int n) {
    vector<int> answer;
    for(int i=2; i<=n; i++)
        if(n%i == 0 && Check(i))
            answer.push_back(i);
    return answer;
}