#include<stdio.h>
main()
{
	int gokei, su, heikin;
	gokei = 0;
	printf("����(-999�ŏI��)?");
	scanf("%d", &su);
	while (su > -999)
	{
		gokei += su;
		printf("����(-999�ŏI��)?");
		scanf("%d", &su);
		heikin ++;
	}
	printf("���v%d\n", gokei);
	printf("����%d", gokei % heikin);
}