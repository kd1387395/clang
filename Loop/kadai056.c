#include<stdio.h>
main()
{
	char moji;
	int i;
	printf("�A���t�@�x�b�g�������H");
	scanf("%c", &moji);
	for (i = 0; moji >= 'a' && moji <= 'z'; i++)
	{
		printf("%c ", moji + i);
	}
}