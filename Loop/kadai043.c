#include<stdio.h>
main()
{
	char moji;
	int i;
	moji = NULL;
	printf("�����R�[�h(-1�ŏI���H)");
	scanf("%d", &i);
	while (i != -1)
	{
		printf("%c", moji + i);
		moji = NULL;
		i = 0;
	}
}