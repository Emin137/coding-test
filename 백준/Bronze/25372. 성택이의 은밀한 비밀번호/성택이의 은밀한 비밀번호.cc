#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	string b;
	for (size_t i = 0; i < a; i++)
	{
		cin >> b;
		if (b.length() >= 6 && b.length() <= 9)
			cout << "yes";
		else
			cout << "no";
		if (i != a - 1)
			cout << endl;
			
	}

}
