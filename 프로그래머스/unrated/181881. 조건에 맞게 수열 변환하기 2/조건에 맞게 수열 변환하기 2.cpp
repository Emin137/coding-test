#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    while(1)
    {
        bool isChange = false;
        for(auto &a : arr)
            if(a>=50 && a%2==0)
            {
                a/=2;
                isChange = true;
            }
                
            else if(a<50 && a%2==1)
            {
                a*=2;
                a++;
                isChange = true;
            }
            if(!isChange)
                break;
        answer++;
    }
    return answer;
}