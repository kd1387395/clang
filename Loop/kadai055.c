#include<stdio.h>
main()
{
	char moji;
	int i;
	moji = 'A';
	for (i = 0; i <= 25; i++)
	{
		printf("%c ", moji + i);
	}
}