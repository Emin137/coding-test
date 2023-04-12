#include <iostream>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    int cups[3] = {1,2,3};
    for(int i=0; i<testCase; i++)
    {
        int num1,num2,temp;
        cin >> num1 >> num2;
        int index1,index2;
        for(int j=0; j<3; j++)
        {
            if(cups[j]==num1)
                index1 = j;
            else if (cups[j]==num2)
                index2 = j;
        }
        temp = cups[index1];
        cups[index1] = cups[index2];
        cups[index2] = temp;
    }
    cout << cups[0];
}
