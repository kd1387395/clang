#include<stdio.h>
main()
{
	int  d,no1, no2;
	printf("演算子を入力(1:+,2:-,3:*,4:/):");
	scanf("%d", &d);
	printf("2つの整数を入力:");
	scanf("%d%d", &no1, &no2);
	if (d == 1)
	{
		printf("%d", no1 + no2);
	}
	else
	{
		if (d == 2)
		{
			printf("%d", no1 - no2);
		}
		else
		{

			if (d == 3)
			{
				printf("%d", no1 * no2);
			}
			else
			{
				if (d == 4)
				{
					printf("%d", no1 / no2);
				}
				else
				{
					printf("演算子は1〜4までにしてください。");
				}
			}
		}
		
	}
}