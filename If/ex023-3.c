#include<stdio.h>
main()
{
	int  d,no1, no2;
	printf("‰‰Zq‚ğ“ü—Í(1:+,2:-,3:*,4:/):");
	scanf("%d", &d);
	printf("2‚Â‚Ì®”‚ğ“ü—Í:");
	scanf("%d%d", &no1, &no2);
	if (d == 1)
	{
		printf("%d", no1 + no2);
	}
	else
	{
		if (d == 2)
		{
			printf("%d", no1 - no2);
		}
		else
		{

			if (d == 3)
			{
				printf("%d", no1 * no2);
			}
			else
			{
				if (d == 4)
				{
					printf("%d", no1 / no2);
				}
				else
				{
					printf("‰‰Zq‚Í1`4‚Ü‚Å‚É‚µ‚Ä‚­‚¾‚³‚¢B");
				}
			}
		}
		
	}
}