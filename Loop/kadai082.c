#include<stdio.h>
main()
{
	int su, sum = 0, i = 0;
	while (1)
	{
		printf("����(-999�ŏI��)�H");
		scanf("%d", &su);
		if (su == -999)
		{
			break;
		}
		if (su <= 0)
		{
			continue;
		}
		sum += su;
		i++;
	}
	printf("���v=%d\n����=%d\n", sum, sum / i);
}