#include<stdio.h>
main()
{
	char data1[5] = "abcde";
	char data2[5];
	int i = 0;
	printf("(�R�s�[��)�z��a data1[]=");
	while (data1[i] != '\0')
	{
		data2[i] = data1[i];
		printf("%c", data1[i]);
		i++;
	}
	i = 0;
	printf("\n(�R�s�[��)�z��b data2[]=");
	while (data2[i] != '\0')
	{
		printf("%c", data2[i]);
		i++;
	}
}