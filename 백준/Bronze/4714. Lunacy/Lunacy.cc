#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	while (1)
	{
		float a;
		cin >> a;
		if (a < 0)
			break;
		cout << fixed;
		cout.precision(2);
		cout << "Objects weighing " << a << " on Earth will weigh " << a*0.167 << " on the moon." << endl;
	}
}
	


