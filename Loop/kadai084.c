#include<stdio.h>
main()
{
	int su1, su2;
	while (1)
	{
		printf("����1(-999�ŏI��)�H");
		scanf("%d", &su1);
		printf("����2(-999�ŏI��)�H");
		scanf("%d", &su2);
		if (su1 == -999 || su2 == -999)
		{
			break;
		}
		if (su1 == 0 || su2 == 0)
		{
			continue;
		}
		printf("%d/%d=%d���܂�%d\n", su1, su2, su1 / su2, su1 % su2);
	}
}