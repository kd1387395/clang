#include<stdio.h>
main()
{
	int no, su;
	no = 0;
	printf("数を入れて:");
	scanf("%d", &su);
	while (no < su)
	{
		printf("*");
		no += 1; //カウントアップ
	}
}