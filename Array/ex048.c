#include<stdio.h>
main()
{
	int i, j, u,gokei;
	int a[2][2][3] = { {{3,4,5},{4,5,6}},{{2,2,3},{2,5,6}} };
	gokei = 0;
	for (i = 0; i < 2; i++) //アパート数分ループ
	{
		printf("アパート%d", i + 1);
		for (j = 0; j < 2; j++) //階数分ループ
		{
			printf("(%d階):", j);
			for (u = 0; u < 3; u++) //号室分ループ
			{
				printf("%d ", a[i][j][u]);
				gokei += a[i][j][u];
			}
		}
		printf("\n");
	}
	printf("全体で%d人住んでいます\n", gokei);
}