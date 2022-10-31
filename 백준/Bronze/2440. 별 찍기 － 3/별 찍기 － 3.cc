#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int a;
	cin >> a;
	for (size_t i = a; i > 0; i--)
	{
		for (size_t j = 0; j < i; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
}
	


