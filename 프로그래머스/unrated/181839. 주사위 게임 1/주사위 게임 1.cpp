#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    if(a%2!=0 && b%2!=0)
        answer = a*a + b*b;
    else if(a%2!=0 || b%2!=0)
        answer  = (a+b)*2;
    else
    {
        int temp = a-b;
        if(temp<0)
            answer = temp*-1;
        else
            answer =temp;
    }
    return answer;
}