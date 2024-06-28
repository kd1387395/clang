#include<stdio.h>
main()
{
	int r, i, su;
	r = 0;
	su = 20;
	do
	{
		for (i = 0; i <= 10; i++)
		{
			printf("%4d", su);
			su--;
		}
		printf("\n");
		r++;
	} while (r == 2);
}