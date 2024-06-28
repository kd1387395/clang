#include<stdio.h>
void error_msg(void); /*プロトタイプ宣言*/
main()
{
	int a, b;
	printf("data1 data2 ?:");
	scanf("%d%d", &a, &b);
	if (b == 0)
	{
		error_msg();
	}
	else
	{
		printf("%d/%d=%d・・・%d\n", a, b, a / b, a % b);
	}
}
void error_msg(void) /*関数error_msgの記述*/
{
	printf("0で割り算は出来ません\n");
	return;
}