#include <iostream>
using namespace std;

int main()
{
	int result, num, count;
	cin >> result;
	cin >> num;
	count = 0;
	for (size_t i = 0; i < num; i++)
	{
		int a, b;
		cin >> a >> b;
		count += a * b;
	}
	if (count == result)
		cout << "Yes";
	else
		cout << "No";
}
