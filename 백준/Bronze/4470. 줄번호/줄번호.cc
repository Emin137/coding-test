#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int a;
	cin >> a;
	cin.ignore();
	for (size_t i = 1; i <= a; i++)
	{
		string b;
		getline(cin, b);
		cout << i << ". " << b<<endl;
	}
}
	


