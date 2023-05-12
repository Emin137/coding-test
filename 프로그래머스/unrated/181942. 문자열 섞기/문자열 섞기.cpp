#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) {
    string answer = "";
    int j=0,k=0;
    for(int i=0; i<str1.size()+str2.size();i++)
    {
        if(i%2==0)
        {
            answer += str1[j++];
        }
        else
            answer += str2[k++];
            
    }
    return answer;
}