#include<stdio.h>
main()
{
	char moji;
	int i;
	moji = NULL;
	printf("文字コード(-1で終了？)");
	scanf("%d", &i);
	while (i != -1)
	{
		printf("%c", moji + i);
		moji = NULL;
		i = 0;
	}
}