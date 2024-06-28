#include<stdio.h>
main()
{
	int c;
	printf("Œ‚ğ“ü—Í:");
	scanf("%d", &c);
	if (c == 1 || c == 3 || c == 5 || c == 7 || c == 8 || c == 10 || c == 12)
	{
		printf("ÅI“ú‚Í31“ú‚Å‚·");
	}
	else
	{
		if (c == 4 || c == 6 || c == 9 || c == 11)
		{
			printf("ÅI“ú‚Í30“ú‚Å‚·");
		}
		else
		{
			printf("ÅI“ú‚Í28“ú‚Å‚·");
		}
	}
}