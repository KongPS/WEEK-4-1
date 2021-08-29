#include <stdio.h>

int main()
{
	int x;
	scanf_s("%d", &x);

	for (int n = 0; n < x; n++)
	{
		for (int j = 0; j < x; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

