#include<stdio.h>
main()
{
	int no;
	printf("��������:");
	scanf("%d", &no);
	if (no % 400 == 0)
	{
		printf("���邤�N�ł�");
	}
	else
	{
		if (no % 4 == 0)
		{
			if (no % 100 != 0) 
			{
				printf("���邤�N�ł�");
			}
			else
			{
				printf("���N�ł�");
			}
		}
		else
		{
			printf("���N�ł�");
		}
	}
}