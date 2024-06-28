#include<stdio.h>
main()
{
	int d[11] = { 10,5,30,77,16,3,47,29,37,33,0 };
	int s, i;

	printf("’Tõ’ls‚ğ“ü—Í");
	scanf("%d", &s);

	i = 0;
	while (s != d[i])
	{
		i++;
	}
	if (i >= 10)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else
	{
		printf("’Tõ’l%d‚ğd[%d]‚Å”­Œ©", s, i);
	}
}