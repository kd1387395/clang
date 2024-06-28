#include<stdio.h>
main()
{
	int no,i;
	printf("êîÇÕ?");
	scanf("%d", &no);
	do {
		i = 0;
		do {
			printf("*");
			i++;
		} while (i < 5);
		printf("\n");
		no--;
	} while (no > 0);
	
}