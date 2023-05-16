#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int cnt = 1;
    int sum=1;
    while(sum<=n)
    {
        cnt++;
        sum*=cnt;
    }
    return cnt-1;
    
}