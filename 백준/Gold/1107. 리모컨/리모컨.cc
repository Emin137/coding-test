#include <iostream>

using namespace std;

int chanel = 500000;
bool isButtonBroken[10];

bool isPossibleChanel(int targetChanel)
{
    string str = to_string(targetChanel);
    for(int i=0; i<str.size(); i++)
    {
        if(isButtonBroken[str[i]-48])
            return false;
    }
    return true;
}

int main()
{
    int targetChanel, buttonCount;
    cin >> targetChanel >> buttonCount;
    
    for(int i=0; i<buttonCount; i++)
    {
        int num;
        cin >> num;
        isButtonBroken[num] = true;
    }
    
    int answer = abs(targetChanel-100);
    
    for(int i=0; i<=chanel*2; i++)
    {
        if(isPossibleChanel(i))
        {
            int tempAnswer = abs(targetChanel-i);
            tempAnswer += to_string(i).length();
            answer = min(answer,tempAnswer);
        }
    }
    
    cout << answer << endl;
}
