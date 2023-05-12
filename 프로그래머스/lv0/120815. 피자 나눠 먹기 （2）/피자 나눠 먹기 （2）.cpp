#include <string>
#include <vector>

using namespace std;
int gcd(int a, int b) {
	int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

int solution(int n) {
    return (n*6)/(gcd(n,6))/6;
}