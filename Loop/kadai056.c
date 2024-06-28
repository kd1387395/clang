#include<stdio.h>
main()
{
	char moji;
	int i;
	printf("アルファベット小文字？");
	scanf("%c", &moji);
	for (i = 0; moji >= 'a' && moji <= 'z'; i++)
	{
		printf("%c ", moji + i);
	}
}