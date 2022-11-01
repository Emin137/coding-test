#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	while (1)
	{
		b -= d;
		c -= e;
		a--;
		if (b <= 0 && c <= 0)
			break;
	}
	cout << a;
}
	


