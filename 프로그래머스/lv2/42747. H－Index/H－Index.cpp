#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    for(int h=0;h<=citations.size();h++)
    {
        int temp1=0;
        for(int i=0;i<citations.size();i++)
        {
            if(citations[i]>=h)
                temp1++;
        }
        int temp2 = citations.size()-temp1;
        if(temp1>= h&& temp2<=h)
            answer=h;
    }
    return answer;
}