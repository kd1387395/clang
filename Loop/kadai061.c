#include<stdio.h>
main()
{
	int i, r, su;
	r = 1;
	su = 0;
	do 
	{
		for (i = 1; i <= 10; i++)
		{
			su++;
			printf("%4d", su);
		}
		printf("\n");
		r++;
	} while (r == 2);
}