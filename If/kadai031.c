#include<stdio.h>
main()
{
	float no1, no2;
	printf("2�̎����l?");
	scanf("%f%f", &no1, &no2);
	printf("�傫���ق���=");
	if (no1 < no2)
	{
		printf("%f", no2);
	}
	else
	{
		printf("%f", no1);
	}
}