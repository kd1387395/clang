#include<stdio.h>
#define WEEK 7
main()
{
	char* day[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday",NULL };
	char** p = day;
	int i;

	//パターン①day[i]の形式の文字列
	for (i = 0; i < WEEK; i++)
	{
		printf("%s\n", day[i]);
	}
	printf("---------------------\n");
	//パターン②-1 *pを用いた文字列
	for (i = 0; i < WEEK; i++)
	{
		printf("%s\n", *(p + i));
	}
	printf("---------------------\n");
	//パターン②-2 *pを用いた文字列
	while (*p)
	{
		printf("%s\n", *p++);
	}
}