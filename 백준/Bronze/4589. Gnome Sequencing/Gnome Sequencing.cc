#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int a;
	cin >> a;
	cout << "Gnomes:\n";
	for (size_t i = 0; i < a; i++)
	{
		int b, c, d;
		cin >> b >> c >> d;
		if (b < c && c < d)
			cout << "Ordered" << endl;
		else if (b > c && c > d)
			cout << "Ordered" << endl;
		else
			cout << "Unordered" << endl;
	}
}
	


