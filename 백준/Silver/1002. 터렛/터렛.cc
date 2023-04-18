#include <iostream>
#include <list>
#include <cmath>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while(testCase--)
    {
        int x[2],y[2],z[2];
        cin >> x[0] >> y[0] >> z[0] >> x[1] >> y[1] >> z[1];
        int d = pow(x[0]-x[1],2) + pow(y[0]-y[1],2);
        int cond1 = pow(z[0]-z[1],2);
        int cond2 = pow(z[0]+z[1],2);
        if(d == 0)
        {
            if(cond1 == 0)
                cout << "-1" << '\n';
            else
                cout << "0" << '\n';
        }
        else if (d == cond1 || d == cond2)
            cout << "1" << '\n';
        else if (cond1 < d && d < cond2)
            cout << "2" << '\n';
        else
            cout << "0" << '\n';
    }
}
