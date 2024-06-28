#include<stdio.h>
main()
{
	int i, sum;
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	printf("配列a=");
	for (sum = 0, i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
		sum += a[i];
	}
	printf("\n合計=%d\t平均=%d\n", sum, sum / 10);
	printf("配列b=");
	for (sum = 0, i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
		sum += b[i];
	}
	printf("\n合計=%d\t平均=%d\n", sum, sum / 10);
}