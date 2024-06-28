#include<stdio.h>
main()
{
	char ,c;
	printf("•¶š‚ğ“ü—Í:");
	scanf("%c", &c);
	if (c <= 'A' && c >= 'z')
	{
		if (c <= "A" && c >= "Z")
		{
			printf("•ÏŠ·‚·‚é‚Æ:%c\n", c + 32);
		}
		else
		{
			printf("•ÏŠ·‚·‚é‚Æ:%c\n", c - 32);
		}
	}
	else
	{
		printf("ƒGƒ‰[");
	}
}