#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 2;
    int temp = 1, temp2 = 0;
    while(n>temp2)
    {
        temp2 = temp*temp;
        if(temp2==n)
        {
            answer = 1;
            break;
        }
        temp++;
    }
    return answer;
}