#include<stdio.h>
main()
{
	int kazu[255], i, r;
	for (i = 0, r = 0; i < 10; i++, r++)
	{
		printf("����(-999�ŏI��)�H");
		scanf("%d", &kazu[i]);
		if (kazu[i] == -999)
		{
			break;
		}
	}
	printf("�z��c=");
	for (i = 0; i != r; i++)
	{
		printf("%d ", kazu[i]);
	}
}