#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int a;
	string b;
	cin >> a;
	cin >> b;
	a = 0;
	for (size_t i = 0; i < b.length(); i++)
	{
		if (b[i] == 'a'
			|| b[i] == 'e'
			|| b[i] == 'i'
			|| b[i] == 'o'
			|| b[i] == 'u')
			a++;
	}
	cout << a;
}
	


