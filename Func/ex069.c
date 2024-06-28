#include<stdio.h>
main()
{
	int a, ret, cnt = 0, k = 0;
	
	printf("®”:");
	ret = scanf("%d", &a);
	while (ret != EOF)
	{
		k += a;
		cnt++;
		printf("®”:");
		ret = scanf("%d", &a);
	}

	printf("‡Œv=%d\t•½‹Ï=%.2f\n", k, (float)k / cnt);
}