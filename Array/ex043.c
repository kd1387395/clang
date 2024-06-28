#include<stdio.h>
main()
{
	char data[] = "orange";
	int i;
	printf("•¶š—ñ:%s", &data[0]);
	i = 0;
	while (data[i] != '\0')
	{
		i++;
	}
	printf("\n•¶š”‚Í%d•¶š\n", i);
}