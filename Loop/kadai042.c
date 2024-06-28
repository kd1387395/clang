#include<stdio.h>
main()
{
	int su, i;
	su = 0;
	i = 0;
	while (su <= 300)
	{
		i++;
		printf("%d", i);
		su += i;
		if (su <= 300)
		{
			printf("+");
		}
	}
	printf("=%d", su);
}