#include <iostream>
using namespace std;
int main()
{
	bool student[31] = {false,};
	for (size_t i = 0; i < 28; i++)
	{
		int input;
		cin >> input;
		student[input] = true;
	}
	for (size_t i = 1; i < 31; i++)
	{
		if (!student[i])
			cout << i << endl;
	}
}
