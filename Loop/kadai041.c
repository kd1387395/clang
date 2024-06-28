#include<stdio.h>
main()
{
	int gokei, su, heikin;
	gokei = 0;
	printf("®”(-999‚ÅI—¹)?");
	scanf("%d", &su);
	while (su > -999)
	{
		gokei += su;
		printf("®”(-999‚ÅI—¹)?");
		scanf("%d", &su);
		heikin ++;
	}
	printf("‡Œv%d\n", gokei);
	printf("•½‹Ï%d", gokei % heikin);
}