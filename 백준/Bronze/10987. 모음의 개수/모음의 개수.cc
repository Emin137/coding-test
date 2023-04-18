#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main()
{
    string input;
    cin >> input;
    int cnt = 0;
    for(auto a: input)
    {
        if(a =='a' || a == 'e' || a =='i' || a == 'o' || a == 'u')
            cnt++;
    }
    cout << cnt;
}
