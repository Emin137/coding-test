#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    for(int i=0; i<my_string.size(); i++)
    {
        bool k=false;
        for(auto &j : indices)
            if(j==i)
                k=true;
        if(!k)
        answer+=my_string[i];
    }
    return answer;
}