#include<stdio.h>
main()
{
	int su, i;
	i = 1;
	su = 0;
	do
	{
		printf("%d", i);
		if (su <= 300)
		{
			printf("+");
		}
		su += i;
		i++;
	}while(su <= 300);
	printf("=%d\n", su);
}