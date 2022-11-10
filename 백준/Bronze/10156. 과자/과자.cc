#include <iostream>
#include <algorithm>
#include <string>
#include<bitset>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if ((a * b - c) < 0)
		cout << 0;
	else
	cout << a * b - c;
}
	


