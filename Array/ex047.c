#include<stdio.h>
main()
{
	int i, j;
	float x[3][2];
	float gokei;
	for (i = 0; i < 3; i++)
	{
		gokei = 0;
		for (j = 0; j < 2; j++)
		{
			printf("x[%d][%d]=", i, j);
			scanf("%f", &x[i][j]);
			gokei += x[i][j];
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n", i, gokei / 2);
		//printf("%ds–Ú‚Ì•½‹Ï=%.2f\n",i,(x[i][0]+x[i][1]/2));
	}
}