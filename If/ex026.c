#include<stdio.h>
main()
{
	int c;
	printf("�������:");
	scanf("%d", &c);
	if (c == 1 || c == 3 || c == 5 || c == 7 || c == 8 || c == 10 || c == 12)
	{
		printf("�ŏI����31���ł�");
	}
	else
	{
		if (c == 4 || c == 6 || c == 9 || c == 11)
		{
			printf("�ŏI����30���ł�");
		}
		else
		{
			printf("�ŏI����28���ł�");
		}
	}
}