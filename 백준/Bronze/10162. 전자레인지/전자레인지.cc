#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <iomanip>
 using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n % 10 != 0)
		cout << -1;
	else
	{
		cout << n / 300 << ' ' << n % 300 / 60 << ' ' << n % 300 % 60 / 10;
	}

}
	


