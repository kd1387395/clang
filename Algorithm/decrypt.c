#include<stdio.h>
main()
{
	char s[10];
	int i;

	printf("�Í������������͂��ĉ�������");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] - 1;
	}
	printf("�����ςݕ�����́A%s", s);
}