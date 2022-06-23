#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d", &a);
	if (1 <= a <= 100000)
	{
		for (b = a; b >= 1; b--)
			printf("%d\n", b);
	}
	return 0;
}