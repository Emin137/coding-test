#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    string temp = "";
    for(int i=0; i<myString.size(); i++)
    {
        temp = "";
        for(int j=0; j<=i; j++)
            temp+=myString[j];
        bool isFind = true;
        if(temp.size() >= pat.size())
            for(int i=0; i<pat.size(); i++)
            {
                if(temp[temp.size()-1-i] != pat[pat.size()-1-i])
                    isFind = false;
            }
        if(isFind)
            answer = temp;
    }
    return answer;
}