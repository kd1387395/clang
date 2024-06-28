#include<stdio.h>
main()
{
	int i, r;
	printf("®”H");
	scanf("%d", &i);
	for (r = 0; r <= 10; r++, i++)
	{
		printf("%d ", i);
	}
}