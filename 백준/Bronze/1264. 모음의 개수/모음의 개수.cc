#include<iostream>
#include<string>
using namespace std;


int main()
{

	while (true)
	{
		string str;
		int count = 0;
		getline(cin, str, '\n');
		if (str == "#")
			break;
		for (size_t i = 0; i < str.size(); i++)
		{
			if (str[i] == 'A' || str[i] == 'a') count++;
			else if (str[i] == 'E' || str[i] == 'e') count++;
			else if (str[i] == 'I' || str[i] == 'i') count++;
			else if (str[i] == 'O' || str[i] == 'o') count++;
			else if (str[i] == 'U' || str[i] == 'u') count++;
		}
		cout << count<<endl;
	}
}