#include<stdio.h>
main()
{
	char s[10];
	int i;

	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢„");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] - 1;
	}
	printf("•œ†Ï‚İ•¶š—ñ‚ÍA%s", s);
}