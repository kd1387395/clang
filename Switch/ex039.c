#include<stdio.h>
main()
{
	char c;
	int no1, no2, no3;
	printf("���������:");
	scanf("%c", &c);
	printf("���������:");
	scanf("%d%d%d", &no1, &no2, &no3);
	switch (c)
	{
	case'd':
	case'D':
		if (no1 > no2)
		{
			if (no1 > no3)
			{
				printf("�ő�l��%d�ł�\n", no1);
			}
			else
			{
				printf("�ő�l��%d�ł�\n", no3);
			}
		}
		else
		{
			if (no2 > no3)
			{
				printf("�ő�l��%d�ł�\n", no2);
			}
			else
			{
				printf("�ő�l��%d�ł�\n", no3);
			}
		}
	case's':
	case'S':
		if (no1 < no2)
		{
			if (no1 < no3)
			{
				printf("�ŏ��l��%d�ł�\n", no1);
			}
			else
			{
				printf("�ŏ��l��%d�ł�\n", no3);
			}
		}
		else
		{
			if (no2 < no3)
			{
				printf("�ŏ��l��%d�ł�\n", no2);
			}
			else
			{
				printf("�ŏ��l��%d�ł�\n", no3);
			}
		}
	case'g':
	case'G':
		printf("���v��%d�ł�\n", no1 + no2 + no3); break;
	case'h':
	case'H':
		printf("���ς�%d�ł�\n", (no1 + no2 + no3) / 3); break;
	default:
		printf("�G���[");
	}
}