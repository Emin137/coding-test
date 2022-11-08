#include <iostream>
#include <algorithm>
#include <string>
#include<bitset>
using namespace std;
int main()
{
	string a;
	int b = 1;
	while (1)
	{
		getline(cin, a);
		if (a == "0")
			break;
		cout << "Case " << b << ": Sorting... done!" << endl;
		b++;
	}
}
	


