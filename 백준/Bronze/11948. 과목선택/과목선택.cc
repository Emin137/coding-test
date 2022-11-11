#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int a, b, c, d, e, f;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;
	int n = a + b + c + d - min(min(min(a, b), c), d) + max(e, f);
	cout << n;
}
	


