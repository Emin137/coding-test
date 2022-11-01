#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int a;
	cin >> a;
	for (size_t i = 0; i < a; i++)
	{
		string b;
		cin >> b;
		for (size_t i = 0; i < b.length(); i++)
		{
			b[i] = tolower(b[i]);
		}
		cout << b << endl;
	}
}
	


