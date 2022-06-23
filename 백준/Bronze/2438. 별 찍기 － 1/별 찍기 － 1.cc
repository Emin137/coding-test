#include <stdio.h>
int main()
{
	int iN, iF, iNum;
	scanf("%d", &iN);
	if (1 <= iN <= 100)
	{
		for (iF = 1; iF <= iN; iF++)
		{
			for (iNum = 1; iNum <= iF; iNum++)
				printf("*");
			printf("\n");
		}
	}
	return 0;
}