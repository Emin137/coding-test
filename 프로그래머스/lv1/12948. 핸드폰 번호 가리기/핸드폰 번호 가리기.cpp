#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int count = 4;
    for(int i = phone_number.size()-1;i>=0;i--)
    {
        count--;
        if(count<0)
        {
            phone_number[i] = '*';
        }
            

            
    }
    return phone_number;
}