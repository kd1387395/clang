#include<stdio.h>
main()
{
	int i, r;
	int b[5][5] = { {3,6,9,12,15},
		{18,21,24,27,30},{33,36,39,42,45},
		{48,51,54,57,60},{63,66,69,72,75 } };
	printf("�z��c�̓��e\n");
	for (i = 0; i < 5; i++)
	{
		for (r = 0; r < 5; r++)
		{
			printf("%2d ", b[i][r]);
		}
		printf("\n");
	}
}