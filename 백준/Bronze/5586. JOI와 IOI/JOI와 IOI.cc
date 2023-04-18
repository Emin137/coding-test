#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cin >> input;
    int cnt1=0,cnt2=0;
    for(int i=0; i<input.length()-2; i++)
    {
        if(input.substr(i,3) == "JOI")
            cnt1++;
        else if(input.substr(i,3) == "IOI")
            cnt2++;
    }
    cout << cnt1 << endl << cnt2;
}
