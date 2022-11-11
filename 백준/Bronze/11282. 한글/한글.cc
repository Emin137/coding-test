#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int n;
	string s;
	cin >> n;
	n += 3071;
	s.push_back(n / 4096 + 234);
	s.push_back(n / 64%64 + 128);
	s.push_back(n % 64 + 128);
	cout << s;

}
	


