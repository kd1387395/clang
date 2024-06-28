#include<stdio.h>
main()
{
	char c;
	int no1, no2, no3;
	printf("処理を入力:");
	scanf("%c", &c);
	printf("整数を入力:");
	scanf("%d%d%d", &no1, &no2, &no3);
	switch (c)
	{
	case'd':
	case'D':
		if (no1 > no2)
		{
			if (no1 > no3)
			{
				printf("最大値は%dです\n", no1);
			}
			else
			{
				printf("最大値は%dです\n", no3);
			}
		}
		else
		{
			if (no2 > no3)
			{
				printf("最大値は%dです\n", no2);
			}
			else
			{
				printf("最大値は%dです\n", no3);
			}
		}
	case's':
	case'S':
		if (no1 < no2)
		{
			if (no1 < no3)
			{
				printf("最小値は%dです\n", no1);
			}
			else
			{
				printf("最小値は%dです\n", no3);
			}
		}
		else
		{
			if (no2 < no3)
			{
				printf("最小値は%dです\n", no2);
			}
			else
			{
				printf("最小値は%dです\n", no3);
			}
		}
	case'g':
	case'G':
		printf("合計は%dです\n", no1 + no2 + no3); break;
	case'h':
	case'H':
		printf("平均は%dです\n", (no1 + no2 + no3) / 3); break;
	default:
		printf("エラー");
	}
}