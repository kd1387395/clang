#include<stdio.h>
main()
{
	int su, sum;
	printf("��������:");
	scanf("%d", &su);
	sum = 1;
	for (sum = 1; sum <= 5; sum++)
	{
		printf("%d ", su * sum);
	}
}