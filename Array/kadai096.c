#include<stdio.h>
main()
{
	int kazu[255], i, r;
	for (i = 0, r = 0; i < 10; i++, r++)
	{
		printf("Ž(-999ĹIš)H");
		scanf("%d", &kazu[i]);
		if (kazu[i] == -999)
		{
			break;
		}
	}
	printf("zńc=");
	for (i = 0; i != r; i++)
	{
		printf("%d ", kazu[i]);
	}
}