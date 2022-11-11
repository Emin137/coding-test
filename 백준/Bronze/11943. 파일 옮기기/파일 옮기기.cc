#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b;
	cin >> c >> d;
	int e = (b + c) < (a + d) ? (b + c) : (a + d);
	cout << e;
}
	


