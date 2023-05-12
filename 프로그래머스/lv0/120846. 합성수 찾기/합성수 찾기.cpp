#include <string>
#include <vector>

using namespace std;

bool check(int n)
{
    int cnt=0;
    for(int i = 1; i<=n; i++)
        if(n%i==0)
            cnt++;
    return cnt>=3?true:false;
}

int solution(int n) {
    int answer = 0;
    for(int i=1;i<=n;i++)
        if(check(i))
            answer++;
    return answer;
}