#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	for (size_t i = 0; i < a; i++)
	{
		string s;
		cin >> s;
		reverse(s.begin(), s.end());
		cout << s << endl;
	}
}
	


