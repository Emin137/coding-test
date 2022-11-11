#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	int b[26];
	for (size_t i = 0; i < 26; i++)
	{
		b[i] = 0;
	}
	for (size_t i = 0; i < a.size(); i++)
	{
		if (a[i] >= 65 && a[i] <= 90)
		{
			int c = a[i] - 65;
			b[c] += 1;
		}
		else if (a[i] >= 97 && a[i] <= 122)
		{
			int c = a[i]-97;
			b[c] += 1;
		}
	}
	for (size_t i = 0; i < 25; i++)
	{
		cout << b[i] << ' ';
	}
	cout << b[25];
}
	


