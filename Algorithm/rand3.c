#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i;
	srand(time(0));
	i = rand() % (100 - 1 + 1) + 1;
	if (i <= 30)
	{
		printf("‚©‚¢‚µ‚ñ‚Ì‚¢‚¿‚°‚«!\n");
	}
	else
	{
		printf("’ÊíUŒ‚\n");
	}
}