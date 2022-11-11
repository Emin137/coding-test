#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int human[5], x, y, r, ans;
	ans = 0;
	cin >> human[1] >> human[2] >> human[3] >> human[4] >> x >> y >> r;
	for (size_t i = 1; i <= 4; i++)
	{
		if (x == human[i])
			ans = i;
	}
	cout << ans;
}
	


