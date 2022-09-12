#include <iostream>
using namespace std;
int main()
{
	int score = 0;
	for (size_t i = 0; i < 5; i++)
	{
		int input;
		cin >> input;
		score += input;
	}
	cout << score;
}
