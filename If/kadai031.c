#include<stdio.h>
main()
{
	float no1, no2;
	printf("2‚Â‚ÌÀ”’l?");
	scanf("%f%f", &no1, &no2);
	printf("‘å‚«‚¢‚Ù‚¤‚Í=");
	if (no1 < no2)
	{
		printf("%f", no2);
	}
	else
	{
		printf("%f", no1);
	}
}