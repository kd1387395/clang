#include<stdio.h>
main()
{
	int i;
	for (i = 1; i <= 20; i++)
	{
		if (i > 21)
		{
			break;
		}
		if (i == 2 || i == 4 || i == 6 || i == 8 || i == 10 || i == 12 || i == 14 || i == 16 || i == 18 || i == 20)
		{
			continue;
		}
		printf("%d ", i);
	}
}