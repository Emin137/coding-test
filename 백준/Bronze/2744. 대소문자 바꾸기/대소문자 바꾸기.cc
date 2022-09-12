#include <iostream>

using namespace std;

int main()
{
    string input;
    cin >> input;
	for (size_t i = 0; i < input.length(); i++)
	{
		if (input[i] >= 'a')
			input[i] -= 32;
		else
			input[i] += 32;
	}
	cout << input;
}
