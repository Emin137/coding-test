#include <iostream>

using namespace std;

int main()
{
    string input;
    int black[6] = { 1,1,2,2,2,8 };
    int white[6];
    for (size_t i = 0; i < 6; i++)
    {
        cin >> white[i];
    }
    for (size_t i = 0; i < 6; i++)
    {
        cout << black[i] - white[i] << ' ';
    }
    
}
