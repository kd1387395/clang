#include<stdio.h>
main()
{
	int no=0;
	int i, j;
	printf("êîÇÕ?");
	scanf("%d", &no);
	i = 0;
	j = 0;
	do {
		i = 0;
		do {
			printf("*");
			i++;
		} while (i < j + 1);
		printf("\n");
		no--;
		j++;
	} while (no > 0);
}