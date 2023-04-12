#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    bool answer = true;
    for(int i=0; i<str.length()/2; i++)
    {
        if(str[i] != str[str.length()-i-1])
            answer=false;
    }
    cout << answer;
}
