#include<stdio.h>
main()
{
	int su, sum = 0, i = 0;
	while (1)
	{
		printf("®”(-999‚ÅI—¹)H");
		scanf("%d", &su);
		if (su == -999)
		{
			break;
		}
		if (su <= 0)
		{
			continue;
		}
		sum += su;
		i++;
	}
	printf("‡Œv=%d\n•½‹Ï=%d\n", sum, sum / i);
}