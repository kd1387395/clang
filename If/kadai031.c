#include<stdio.h>
main()
{
	float no1, no2;
	printf("2つの実数値?");
	scanf("%f%f", &no1, &no2);
	printf("大きいほうは=");
	if (no1 < no2)
	{
		printf("%f", no2);
	}
	else
	{
		printf("%f", no1);
	}
}