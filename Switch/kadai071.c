#include<stdio.h>
main()
{
	int no1, no2;
	char ao;
	printf("���Z�q");
	scanf("%c", &ao);
	printf("����1�H");
	scanf("%d", &no1);
	printf("����2�H");
	scanf("%d", &no2);
	switch (ao)
	{
	 case '+':printf("%d+%d=%d\n", no1, no2, no1 + no2); break;
	 case '-':printf("%d-%d=%d\n", no1, no2, no1 - no2); break;
	 case '*':printf("%d�~%d=%d\n", no1, no2, no1 * no2); break;
	 case '/':printf("%d��%d=&d\n", no1, no2, no1 / no2); break;
	 case '%':printf("%d��%d=%d�E�E�E%d\n", no1, no2, no1 / no2, no1 % no2); break;
	}
}