#include<stdio.h>
main()
{
	char ,c;
	printf("文字を入力:");
	scanf("%c", &c);
	if (c <= 'A' && c >= 'z')
	{
		if (c <= "A" && c >= "Z")
		{
			printf("変換すると:%c\n", c + 32);
		}
		else
		{
			printf("変換すると:%c\n", c - 32);
		}
	}
	else
	{
		printf("エラー");
	}
}