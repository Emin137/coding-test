#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;
    int d = a+b+c;
    int e = d*(a*a+b*b+c*c);
    int f = e*(a*a*a+b*b*b+c*c*c);
    if(a!=b && a!=c && b!=c)
        answer = d;
    else if(a==b && b==c && a==c)
        answer = f;
    else
        answer = e;
    return answer;
}