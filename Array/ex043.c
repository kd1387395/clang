#include<stdio.h>
main()
{
	char data[] = "orange";
	int i;
	printf("������:%s", &data[0]);
	i = 0;
	while (data[i] != '\0')
	{
		i++;
	}
	printf("\n��������%d����\n", i);
}