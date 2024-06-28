#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 }, c[10];
	int i, r;
	printf("”z—ña=");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0,r = 9; i < 10; i++, r--)
	{
		c[r] = a[i];
	}
	printf("”z—ñb=");
	for (r = 0; r < 10; r++)
	{
		printf("%d ", c[r]);
	}
}