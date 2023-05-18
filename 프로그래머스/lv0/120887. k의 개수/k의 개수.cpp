#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for(;i<=j;i++)
    {
        for(auto &a : to_string(i))
            if(a==k+48)
                answer++;
    }
    return answer;
}