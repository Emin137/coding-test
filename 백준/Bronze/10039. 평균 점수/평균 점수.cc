#include <iostream>
#include <algorithm>
#include <string>
#include<bitset>
using namespace std;
int main()
{
	int a[5];
	cin >> a[0];
	cin >> a[1];
	cin >> a[2];
	cin >> a[3];
	cin >> a[4];
	int b=0;
	for (size_t i = 0; i < 5; i++)
	{
		if (a[i] < 40)
			a[i] = 40;
		b += a[i];
	}
	cout << b / 5;
}
	


