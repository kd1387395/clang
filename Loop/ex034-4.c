#include<stdio.h>
main()
{
	int no, i, j;
	printf("”‚Í?");
	scanf("%d", &no);
	i = 0;
	j = 0;
	do 
	{
		i = 0;
		do//‹ó”’—p
		{
			printf(" ");
			i++;
		} while (i < no - j);

		i = 0;
		do//*—p
		{
			printf("*");
			i++;
		} while (i < j + 1);

		printf("\n");
		j++;

	} while (j < no);

}