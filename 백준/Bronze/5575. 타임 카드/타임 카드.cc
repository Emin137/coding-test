#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	for (size_t i = 0; i < 3; i++)
	{
		int a, b, c, d, e, f;
		int g;
		cin >> a >> b >> c >> d >> e >> f;
		g = ((d * 3600) + (e * 60) + f) - ((a * 3600) + (b * 60) + c);
		cout << g / 3600 << ' ' << g % 3600 / 60 << ' ' << g % 3600 % 60 << endl;
	}
}
	


