#include<stdio.h>
main()
{
	int i, r;
	for (i = 1; i <= 60; i++)
	{
		printf("%2d ", i);
		if (i == 20 || i == 40)
		{
			printf("\n");
		}
	}
	printf("\n");
}