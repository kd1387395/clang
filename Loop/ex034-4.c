#include<stdio.h>
main()
{
	int no, i, j;
	printf("数は?");
	scanf("%d", &no);
	i = 0;
	j = 0;
	do 
	{
		i = 0;
		do//空白用
		{
			printf(" ");
			i++;
		} while (i < no - j);

		i = 0;
		do//*用
		{
			printf("*");
			i++;
		} while (i < j + 1);

		printf("\n");
		j++;

	} while (j < no);

}