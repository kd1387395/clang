#include<stdio.h>
main()
{
	int no1, no2;
	char ao;
	printf("演算子");
	scanf("%c", &ao);
	printf("整数1？");
	scanf("%d", &no1);
	printf("整数2？");
	scanf("%d", &no2);
	switch (ao)
	{
	 case '+':printf("%d+%d=%d\n", no1, no2, no1 + no2); break;
	 case '-':printf("%d-%d=%d\n", no1, no2, no1 - no2); break;
	 case '*':printf("%d×%d=%d\n", no1, no2, no1 * no2); break;
	 case '/':printf("%d÷%d=&d\n", no1, no2, no1 / no2); break;
	 case '%':printf("%d÷%d=%d・・・%d\n", no1, no2, no1 / no2, no1 % no2); break;
	}
}