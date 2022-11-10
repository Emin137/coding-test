#include <iostream>
#include <algorithm>
#include <string>
#include<bitset>
using namespace std;
int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	if (a < 2)
		cout << "Before";
	else
	{
		if (a == 2)
		{
			if (b < 18)
				cout << "Before";
			else if (b == 18)
				cout << "Special";
			else
				cout << "After";
		}
		else
		{
			cout << "After";
		}
	}

}
	


