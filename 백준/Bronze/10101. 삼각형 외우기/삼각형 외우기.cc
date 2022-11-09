#include <iostream>
#include <algorithm>
#include <string>
#include<bitset>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a + b + c) != 180)
		cout << "Error";
	else
	{
		if (a == b && b == c)
			cout << "Equilateral";
		else if (a == b || b == c || a==c)
			cout << "Isosceles";
		else
			cout << "Scalene";
	}
}
	


