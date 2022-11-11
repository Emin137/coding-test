#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int a;
	int b[5];
	int count = 0;
	cin >> a;
	cin >> b[0] >> b[1] >> b[2] >> b[3] >> b[4];
	for (size_t i = 0; i < 5; i++)
	{
		if (b[i] == a)
			count++;
	}
	cout << count;
}
	


