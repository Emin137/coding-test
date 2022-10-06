#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cin >> a >> b;
    if (a - (a / 100 * b) >= 100)
        cout << 0;
    else
        cout << 1;

}
