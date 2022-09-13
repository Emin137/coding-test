#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a;
	cin >> a;
	string result;
	for (size_t i = 0; i < a; i++)
	{
		string str;
		cin >> str;
		cout << str[0] << str[str.length() - 1] << endl;
	}
}
