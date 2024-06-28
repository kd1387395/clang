#include<stdio.h>
main()
{
	char s[20];
	int i, k;

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢„");
	scanf("%s", &s);
	i = 0;
	while (s[i] != '\0')
	{
		printf("s[%d]‚ÌˆÃ†‰»ƒL[„", i);
		scanf("%d", &k);
		s[i] = s[i] - k;
		i++;
	}
	printf("•¡‡‰»Ï‚İ•¶š—ñ‚ÍA%s", s);
}