#include<stdio.h>
main()
{
	char ,c;
	printf("���������:");
	scanf("%c", &c);
	if (c <= 'A' && c >= 'z')
	{
		if (c <= "A" && c >= "Z")
		{
			printf("�ϊ������:%c\n", c + 32);
		}
		else
		{
			printf("�ϊ������:%c\n", c - 32);
		}
	}
	else
	{
		printf("�G���[");
	}
}