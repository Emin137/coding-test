#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(int i=0; i<=myString.size()-pat.size(); i++)
    {
        string temp = "";
        for(int j=0; j<pat.size(); j++)
            temp+=myString[i+j];
        if(temp == pat)
            answer++;
        
    }
    return answer;
}