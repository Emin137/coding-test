#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a;
	cin >> a;
	if (a == 0)
		cout << 1;
	else
	{
		for (int i = a-1; i > 0; i--)
		{
			a *= i;
		}
		cout << a;
	}
}


