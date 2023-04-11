#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int currentTemp,targetTemp,a,b,c;
    
    cin >> currentTemp;
    cin >> targetTemp;
    cin >> a;
    cin >> b;
    cin >> c;
    
    int resultTime = 0;
    bool isFrozen = false;
    
    while(currentTemp!=targetTemp)
    {
        if(currentTemp<0)
        {
            isFrozen=true;
            resultTime+=abs(currentTemp)*a;
            currentTemp=0;
        }
        
        if(currentTemp==0&&isFrozen)
        {
            isFrozen=false;
            resultTime+=b;
        }
        else
        {
            resultTime+=(targetTemp-currentTemp)*c;
            currentTemp=targetTemp;
        }
    }
    cout << resultTime << endl;
}
