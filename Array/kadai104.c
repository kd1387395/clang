#include<stdio.h>
main()
{
	int i, r;
	int a[5][5] = { {1,2,3,4,5},
		{6,7,8,9,10},{11,12,13,14,15},
		{16,17,18,19,20},{21,22,23,24,25} };
	int b[5][5] = { {3,6,9,12,15},
		{18,21,24,27,30},{33,36,39,42,45},
		{48,51,54,57,60},{63,66,69,72,75 } };
	int c[5][5];
	printf("�z��a\n");
	for (i = 0; i < 5; i++)
	{
		for (r = 0; r < 5; r++)
		{
			c[i][r] = a[i][r];
			a[i][r] = b[i][r];
			b[i][r] = c[i][r];
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (r = 0; r < 5; r++)
		{
			printf("%2d ", a[i][r]);
		}
		printf("\n");
	}
	printf("\n�z��b\n");
	for (i = 0; i < 5; i++)
	{
		for (r = 0; r < 5; r++)
		{
			printf("%2d ", b[i][r]);
		}
		printf("\n");
	}
}