#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int resultY=0;
    int resultM=0;
    for(int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        resultY += (b/30+1)*10;
        resultM += (b/60+1)*15;
    }
    
    if(resultY<resultM)
        cout << "Y " << resultY;
    else if (resultY==resultM)
        cout << "Y M " << resultY;
    else
        cout << "M " << resultM;
        
}
