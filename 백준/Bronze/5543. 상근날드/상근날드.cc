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
	cout << min(min(a, b), c) + min(d, e) - 50;
}
	


