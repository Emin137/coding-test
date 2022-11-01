#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	while (1)
	{
		float a;
		cin >> a;
		if (a == 0)
			break;
		cout<<fixed;
		cout.precision(2);
		cout << 1 + (a)+(a * a) + (a * a * a) + (a * a * a * a) << endl;
	}
}
	


