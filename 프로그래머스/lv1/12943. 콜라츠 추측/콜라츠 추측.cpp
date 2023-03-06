#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long num2=0;
    num2 = num;
    while(num2 != 1)
    {
        if(num2%2==0)
        {
            num2/=2;
            answer++;
        }
        else
        {
            num2*=3;
            num2+=1;
            answer++;
        }
        if(answer==500)
        {
            answer = -1;
            break;
        }
    }
    return answer;
}