#include<stdio.h>
main()
{
	int r, i, su;
	r = 1;
	su = 20;
	while (r <= 2)
	{
		for (i = 1; i <= 10; i++)
		{
			printf("%4d", su);
			su--;
		}
		printf("\n");
		r++;
	}
}