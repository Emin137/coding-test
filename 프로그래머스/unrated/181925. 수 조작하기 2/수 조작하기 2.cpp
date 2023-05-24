#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int temp = numLog[0];
    for(int i=1; i<numLog.size(); i++)
    {
        if(temp + 1 == numLog[i])
        {
            answer+='w';
            temp+=1;
        }
            
        else if(temp - 1 == numLog[i])
        {
            answer+='s';
            temp-=1;
        }
            
        else if(temp + 10 == numLog[i])
        {
            answer+='d';
            temp+=10;
        }
            
        else if(temp - 10 == numLog[i])
        {
            answer+='a';
            temp-=10;
        }
    }
    return answer;
}