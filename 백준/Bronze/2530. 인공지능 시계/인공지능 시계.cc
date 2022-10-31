#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c;
	cin >> d;
	cout << (a + (b + (c + d) / 60) / 60) % 24 << " " << (b + (c + d) / 60) % 60 << " " << (c + d) % 60;
}
	


