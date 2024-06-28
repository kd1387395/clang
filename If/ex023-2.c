#include<stdio.h>
main()
{
	int no;
	printf("西暦を入力:");
	scanf("%d", &no);
	if (no % 400 == 0)
	{
		printf("うるう年です");
	}
	else
	{
		if (no % 4 == 0)
		{
			if (no % 100 != 0) 
			{
				printf("うるう年です");
			}
			else
			{
				printf("平年です");
			}
		}
		else
		{
			printf("平年です");
		}
	}
}