#include<stdio.h>
main()
{
	int c;
	printf("月を入力:");
	scanf("%d", &c);
	if (c == 1 || c == 3 || c == 5 || c == 7 || c == 8 || c == 10 || c == 12)
	{
		printf("最終日は31日です");
	}
	else
	{
		if (c == 4 || c == 6 || c == 9 || c == 11)
		{
			printf("最終日は30日です");
		}
		else
		{
			printf("最終日は28日です");
		}
	}
}