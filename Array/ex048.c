#include<stdio.h>
main()
{
	int i, j, u,gokei;
	int a[2][2][3] = { {{3,4,5},{4,5,6}},{{2,2,3},{2,5,6}} };
	gokei = 0;
	for (i = 0; i < 2; i++) //�A�p�[�g�������[�v
	{
		printf("�A�p�[�g%d", i + 1);
		for (j = 0; j < 2; j++) //�K�������[�v
		{
			printf("(%d�K):", j);
			for (u = 0; u < 3; u++) //���������[�v
			{
				printf("%d ", a[i][j][u]);
				gokei += a[i][j][u];
			}
		}
		printf("\n");
	}
	printf("�S�̂�%d�l�Z��ł��܂�\n", gokei);
}