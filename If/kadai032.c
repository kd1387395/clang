#include<stdio.h>
main()
{
	int no;
	printf("整数?");
	scanf("%d", &no);
	if (no == 1 * 2)
	{
		printf("その数は偶数です\n");
	}
	else
	{
		printf("その数は奇数です\n");
	}
}