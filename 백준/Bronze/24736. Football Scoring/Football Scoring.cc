#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int a, b, c, d, e;
	for (size_t i = 0; i < 2; i++)
	{
	cin >> a >> b >> c >> d >> e;
	cout << a * 6 + b * 3 + c * 2 + d * 1 + e * 2;
	if (i == 0)
		cout << ' ';
	}
	
}
	


